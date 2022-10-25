import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import Cores 1.0
import Botoes 1.0
import Components 1.0

Rectangle {
  id: gridComponents
  Layout.fillHeight: true
  Layout.fillWidth: true
  color: "transparent"

  Component.onCompleted: {
    gridView.model.append({
                            "myText": "Rec",
                            "myObj": "import Components 1.0; Square{}"
                          })
    gridView.model.append({
                            "myText": "Circ",
                            "myObj": "import Components 1.0; Square{}"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
    gridView.model.append({
                            "myText": "O"
                          })
  }

  Rectangle {
    width: parent.width * 0.8
    height: parent.height * 0.9
    border.color: "black"
    anchors.centerIn: parent
    color: "transparent"
    ColumnLayout {

      anchors.fill: parent
      spacing: 0
      Rectangle {
        Layout.fillWidth: true
        Layout.fillHeight: true
        Layout.maximumHeight: 40

        color: "transparent"
        Layout.alignment: Qt.AlignTop
        Text {
          text: qsTr("Ferramentas")
          color: "white"
          anchors.centerIn: parent
          font.pointSize: 10
        }
      }
      Item {
        Layout.fillWidth: true
        Layout.fillHeight: true
        GridView {
          id: gridView
          anchors.horizontalCenter: parent.horizontalCenter
          width: parent.width * 0.99
          height: 100

          cellHeight: height / 3
          cellWidth: width / 3

          model: ListModel {}

          delegate: ButtonColl {
            width: gridView.cellWidth
            height: gridView.cellHeight
            Text {
              anchors.centerIn: parent
              text: myText
              color: "white"
            }
            colorNormal: PaletaCores.cor2
            colorHovered: Qt.lighter(PaletaCores.cor2)
            colorPressed: Qt.lighter(PaletaCores.cor2)
            tap {
              onClicked: {
                Qt.createQmlObject(myObj, body)
              }
            }
          }
        }
      }
    }
  }
}
