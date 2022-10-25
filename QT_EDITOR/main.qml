import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

ApplicationWindow {
  title: qsTr("Editor")
  width: 640
  height: 480
  visible: true
  color: "transparent"

  Loader {
    id: mainLoader
    anchors.fill: parent
    source: "./MainWindow.qml"
    //./Pages/Login.qml
    //./MainWindow.qml
    function reload() {
      mainLoader.source = ""
      QmlEngine.clearCache()
      mainLoader.source = "./MainWindow.qml"
    }
    Connections {
      target: QmlEngine

      function onReloadUI() {
        console.log("Reloading UI")
        mainLoader.reload()
      }
    }
  }
}
