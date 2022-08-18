#ifndef RCCREVERSE_H
#define RCCREVERSE_H

#include <QString>
#include <QDir>

class RccReverse
{
public:
    RccReverse();
    void run(const QDir &dir);

private:
    QString m_resPath;
    QString m_qrcPath;
    QString m_batPath;

    QString m_qrc;
    QString m_bat;
    QString m_rcc;

    void recurRccReverse(const QDir &dir, const QString &path);
    void qrcWrite(QString qrc, QString path);
};

#endif // RCCREVERSE_H
