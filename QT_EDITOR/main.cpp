#include "ComponentsC/MyRectangle.h"
#include "core/componentcreatorengine.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    if (qEnvironmentVariableIsEmpty("QTGLESSTREAM_DISPLAY")) {
        qputenv("QT_QPA_EGLFS_PHYSICAL_WIDTH", QByteArray("213"));
        qputenv("QT_QPA_EGLFS_PHYSICAL_HEIGHT", QByteArray("120"));

      #if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
#endif
    }
    qputenv("MAIN_QML", "main.qml");//main.qml
    //qrc:/main.qml
    QGuiApplication app(argc, argv);

    ComponentCreatorEngine engine;
    engine.addImportPath("../components_library");

    engine.rootContext()->setContextProperty("QmlEngine", &engine);

    const QUrl url(qgetenv("MAIN_QML"));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);
    qmlRegisterType<MyRectangle>("MyRectangle",1,0,"MyRectangle");

    return app.exec();
}
