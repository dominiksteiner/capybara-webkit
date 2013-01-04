#include "SocketCommand.h"

class SetJavaEnabled : public SocketCommand {
  Q_OBJECT

  public:
    SetJavaEnabled(WebPageManager *manager, QStringList &arguments, QObject *parent = 0);
    virtual void start();
};
