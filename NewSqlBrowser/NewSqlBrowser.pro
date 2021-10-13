TEMPLATE        = app
TARGET          = sqlbrowser

QT              += sql widgets
QT += sql
QT += gui
requires(qtConfig(tableview))

SOURCES += \
    browser.cpp \
    connectionwidget.cpp \
    main.cpp \
    qsqlconnectiondialog.cpp

FORMS += \
    browserwidget.ui \
    qsqlconnectiondialog.ui

HEADERS += \
    browser.h \
    connectionwidget.h \
    qsqlconnectiondialog.h

QT += widgets
