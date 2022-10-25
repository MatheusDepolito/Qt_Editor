import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import Cores 1.0
import "./SubComponents"

Rectangle {
  id: menu
  Layout.fillHeight: true
  Layout.fillWidth: true
  Layout.maximumWidth: parent.width * 0.11
  color: PaletaCores.cor2

  ColumnLayout {
    id: name
    anchors.fill: parent
    spacing: 0
    Logo {
      id: logo
    }
    ColunaMenuL {
      id: gridComponents
    }
  }
}
