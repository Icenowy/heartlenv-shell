// -*- mode: js; js-indent-level: 4; indent-tabs-mode: nil -*-

const Gio = imports.gi.Gio;
const Lang = imports.lang;
const Signals = imports.signals;

const PresenceIface = <interface name="org.heartlenv.SessionManager.Presence">
<method name="SetStatus">
    <arg type="u" direction="in"/>
</method>
<property name="status" type="u" access="readwrite"/>
<signal name="StatusChanged">
    <arg type="u" direction="out"/>
</signal>
</interface>;

const PresenceStatus = {
    AVAILABLE: 0,
    INVISIBLE: 1,
    BUSY: 2,
    IDLE: 3
};

var PresenceProxy = Gio.DBusProxy.makeProxyWrapper(PresenceIface);
function Presence(initCallback, cancellable) {
    return new PresenceProxy(Gio.DBus.session, 'org.heartlenv.SessionManager',
                             '/org/heartlenv/SessionManager/Presence', initCallback, cancellable);
}

// Note inhibitors are immutable objects, so they don't
// change at runtime (changes always come in the form
// of new inhibitors)
const InhibitorIface = <interface name="org.heartlenv.SessionManager.Inhibitor">
<method name="GetAppId">
    <arg type="s" direction="out" />
</method>
<method name="GetReason">
    <arg type="s" direction="out" />
</method>
</interface>;

var InhibitorProxy = Gio.DBusProxy.makeProxyWrapper(InhibitorIface);
function Inhibitor(objectPath, initCallback, cancellable) {
    return new InhibitorProxy(Gio.DBus.session, 'org.heartlenv.SessionManager', objectPath, initCallback, cancellable);
}

// Not the full interface, only the methods we use
const SessionManagerIface = <interface name="org.heartlenv.SessionManager">
<method name="Logout">
    <arg type="u" direction="in" />
</method>
<method name="Shutdown" />
<method name="CanShutdown">
    <arg type="b" direction="out" />
</method>
</interface>;

var SessionManagerProxy = Gio.DBusProxy.makeProxyWrapper(SessionManagerIface);
function SessionManager(initCallback, cancellable) {
    return new SessionManagerProxy(Gio.DBus.session, 'org.heartlenv.SessionManager', '/org/heartlenv/SessionManager', initCallback, cancellable);
}