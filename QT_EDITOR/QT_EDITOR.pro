QT += quick

SOURCES += \
        ComponentsC/Form.cpp \
        ComponentsC/MyRectangle.cpp \
        core/componentcreatorengine.cpp \
        core/filewatcher.cpp \
        main.cpp


RESOURCES +=  myResources.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = $$PWD/../components_library

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ComponentsC/Form.h \
    ComponentsC/MyRectangle.h \
    core/componentcreatorengine.h \
    core/filewatcher.h

DISTFILES +=
