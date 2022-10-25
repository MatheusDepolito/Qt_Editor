import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import Cores 1.0

Item {
  Layout.fillHeight: true
  Layout.fillWidth: true
  Layout.maximumHeight: parent.height * 0.20
  Layout.alignment: Qt.AlignTop
  Rectangle {
    anchors.fill: parent
    color: "transparent"
    Text {
      text: qsTr("Logo")
      color: "white"
      anchors.centerIn: parent
      font.pointSize: 22
    }
  }
}
