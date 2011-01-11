#ifndef MAVLINKSETTINGSWIDGET_H
#define MAVLINKSETTINGSWIDGET_H

#include <QtGui/QWidget>

#include "MAVLinkProtocol.h"

namespace Ui {
    class MAVLinkSettingsWidget;
}

class MAVLinkSettingsWidget : public QWidget {
    Q_OBJECT
public:
    MAVLinkSettingsWidget(MAVLinkProtocol* protocol, QWidget *parent = 0);
    ~MAVLinkSettingsWidget();

public slots:
    /** @brief Update the log file name display */
    void updateLogfileName(const QString& fileName);
    /** @brief Start the file select dialog for the log file */
    void chooseLogfileName();

protected:
    MAVLinkProtocol* protocol;
    void changeEvent(QEvent *e);

private:
    Ui::MAVLinkSettingsWidget *m_ui;
};

#endif // MAVLINKSETTINGSWIDGET_H
