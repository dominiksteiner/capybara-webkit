#include "SetJavaEnabled.h"
#include "WebPage.h"
#include "WebPageManager.h"

SetJavaEnabled::SetJavaEnabled(WebPageManager *manager, QStringList &arguments, QObject *parent) :
  SocketCommand(manager, arguments, parent) {
}

void SetJavaEnabled::start() {
  page()->setJavaEnabled(arguments().contains("true"));
  emit finished(new Response(true));
}
