#include "utils.h"

Utils::Utils()
{

}

QString Utils::mapErrorMessage(QString message) {
    if (message.contains("permission")) {
        return "Вы не имеете разрешения на это действие";
    } else if (message.contains("foreign key constraint")) {
        return "Данная запись используется в другой таблице. Вы не можете ее удалить";
    } else if (message.contains("already exists")) {
        return "Данная запись или поле записи уже существует. Используйте другое значение";
    }
    return message;
}
