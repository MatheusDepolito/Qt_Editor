import QtQuick 2.15
import MyRectangle 1.0

//Item {
//  property int wid: square.width
//  property int hei: square.height
//  property color cor: square.color
MyRectangle {
  id: square
  property int w: 100
  property int h: 100
  property color c: "red"
  width: w
  height: h
  color: c
  DragHandler {}
  TapHandler {
    onDoubleTapped: {
      Qt.createQmlObject("Form{}", body)
    }
  }
} //}
