import QtQuick 2.15
import Botoes 1.0
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15

Item {
  Layout.fillHeight: true
  Layout.fillWidth: true
  Layout.maximumHeight: parent.height * 0.065
  property alias clr: test.color
  Rectangle {
    id: test
    anchors.fill: parent
    color: "red"
  }
  //  property alias txt: txt
  //  ButtonColl {
  //    id: btnDrop
  //    Layout.fillHeight: true
  //    Layout.fillWidth: true
  //    Layout.maximumHeight: parent.height * 0.065
  //    colorHovered: "red"
  //    colorNormal: "red"
  //    colorPressed: "red"
  //    Text {
  //      id: txt
  //      anchors.centerIn: parent
  //      text: qsTr("text")
  //    }
  //  }
}
