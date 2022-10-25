import QtQuick 2.15

Item {
  visible: true
  property alias tap: tap
  property alias myButtonn: myButton
  property alias colorPressed: myButton.welColorClicked
  property alias colorHovered: myButton.welColorHovered
  property alias colorNormal: myButton.welColorNormal
  Rectangle {
    id: myButton
    anchors.fill: parent
    //    opacity: hoverHandler.hovered ? 0.5 : 1
    property color welColorClicked: "blue"
    property color welColorHovered: "blue"
    property color welColorNormal: "blue"

    color: tapHandler.pressed ? welColorClicked : hoverHandler.hovered ? welColorHovered : welColorNormal
    //    border.color: activeFocus ? welColorNormal : bColor
    focus: true

    MouseArea {
      id: tap
      anchors.fill: parent
      cursorShape: Qt.PointingHandCursor
    }
    TapHandler {
      id: tapHandler
    }
    HoverHandler {
      id: hoverHandler
    }
    //    Keys.onEnterPressed: myButton.clicked(console.log("Testing"))
  }
}
