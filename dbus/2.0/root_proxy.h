/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -c Mpris2RootProxy -p root_proxy Root_Node.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ROOT_PROXY_H_1281721270
#define ROOT_PROXY_H_1281721270

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.mpris.MediaPlayer2
 */
class Mpris2RootProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.mpris.MediaPlayer2"; }

public:
    Mpris2RootProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~Mpris2RootProxy();

    Q_PROPERTY(bool CanQuit READ canQuit)
    inline bool canQuit() const
    { return qvariant_cast< bool >(property("CanQuit")); }

    Q_PROPERTY(bool CanRaise READ canRaise)
    inline bool canRaise() const
    { return qvariant_cast< bool >(property("CanRaise")); }

    Q_PROPERTY(QString DesktopEntry READ desktopEntry)
    inline QString desktopEntry() const
    { return qvariant_cast< QString >(property("DesktopEntry")); }

    Q_PROPERTY(bool HasTrackList READ hasTrackList)
    inline bool hasTrackList() const
    { return qvariant_cast< bool >(property("HasTrackList")); }

    Q_PROPERTY(QString Identity READ identity)
    inline QString identity() const
    { return qvariant_cast< QString >(property("Identity")); }

    Q_PROPERTY(QStringList SupportedMimeTypes READ supportedMimeTypes)
    inline QStringList supportedMimeTypes() const
    { return qvariant_cast< QStringList >(property("SupportedMimeTypes")); }

    Q_PROPERTY(QStringList SupportedUriSchemes READ supportedUriSchemes)
    inline QStringList supportedUriSchemes() const
    { return qvariant_cast< QStringList >(property("SupportedUriSchemes")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Quit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Quit"), argumentList);
    }

    inline QDBusPendingReply<> Raise()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Raise"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif