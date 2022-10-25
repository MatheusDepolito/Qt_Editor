import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import "./ComponentsQml"

Item {
  id: mainWindow

  Background {
    id: background
  }

  RowLayout {
    id: rowLayout
    anchors.fill: parent
    spacing: 3
    MenuLeft {
      id: menuLeft
    }
    Body {
      id: body
    }
  }
}
