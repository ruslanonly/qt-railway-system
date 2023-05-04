#include "utils.h"

Utils::Utils()
{

}

QString Utils::mapErrorMessage(QString message) {
    if (message.contains("permission")) {
        return "Вы не имеете разрешения на это действие";
    }
    return message;
}
