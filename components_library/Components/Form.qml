import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Item {
  width: 200
  height: 200

  property color getColor
  property var getWidth
  property var getHeight
  DragHandler {}
  Rectangle {
    id: formulario
    x: parent.width / 2
    y: parent.height / 2
    anchors.fill: parent
    radius: 10
    color: "lightblue"

    ColumnLayout {
      id: name
      anchors.fill: parent
      spacing: 0
      Rectangle {
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.maximumHeight: 30
        color: "transparent"
        Button {
          id: btnx
          width: 25
          height: 25
          text: "x"
          Layout.alignment: Qt.AlignTop | Qt.AlignRight
          onClicked: {
            formulario.destroy()
          }
        }
      }
      Rectangle {
        Layout.fillHeight: true
        Layout.fillWidth: true
        color: "transparent"
        ColumnLayout {
          anchors.fill: parent
          spacing: 0
          TextField {
            placeholderText: qsTr("width")
            Layout.alignment: Qt.AlignHCenter
            onEditingFinished: text === "" ? getWidth = square.w : getWidth = text
          }
          TextField {
            id: larg
            placeholderText: qsTr("Height")
            Layout.alignment: Qt.AlignHCenter
            onEditingFinished: text === "" ? getHeight = square.h : getHeight = text
          }
          TextField {
            id: cor
            Layout.alignment: Qt.AlignHCenter
            placeholderText: qsTr("Color")
            onEditingFinished: text === "" ? getColor = "red" : getColor = text
          }
        }
      }
      Rectangle {
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.maximumHeight: 50
        color: "transparent"
        Button {
          id: btn
          width: 100
          height: 25
          anchors.centerIn: parent
          text: "click"
          onClicked: {
            square.c = getColor
            square.w = getWidth
            square.h = getHeight
          }
        }
      }
    }
  }
}
/*          Button {
        id: btnx
        width: 25
        height: 25
        text: "x"
        Layout.alignment: Qt.AlignTop | Qt.AlignRight
        onClicked: {
          formulario.destroy()
        }
      }
    TextField {
      //    text: formRec.comprimento
      placeholderText: qsTr("width")
      x: parent.width / 5.6
      y: parent.height / 2.6
      onEditingFinished: text === "" ? getWidth = 0 : getWidth = text
    }
    TextField {
      id: larg
      //    text: formRec.largura
      placeholderText: qsTr("Height")

      y: parent.height / 2
      x: parent.width / 5.6
      onEditingFinished: text === "" ? getHeight = 0 : getHeight = text
    }
    TextField {
      id: cor
      placeholderText: qsTr("Color")

    }

    Button {
      id: btn
      width: 100
      height: 25
      text: "click"
      anchors.top: larg.bottom
      anchors.margins: 10
      x: parent.width / 4
      onClicked: {

        square.w = getWidth
        square.h = getHeight
      }
    }*/

