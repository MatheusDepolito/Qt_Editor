pragma Singleton

import QtQuick 2.15

Item {
  property alias themes: tema
  QtObject {
    id: tema
    readonly property var temaLight: ["white", "whiteSmoke"]
    readonly property var temaDark: ["#000", "#212121"]
  }
  property var temaAtual: tema.temaDark

  readonly property string cor1: temaAtual[0]
  readonly property string cor2: temaAtual[1]
}
