main(){}
#include <a_samp>
#include <a_mysql>
#include <pawn.cmd>
#include <pawn.regex>
#include <streamer>
#include <sscanf2>
#include <crashdetect>
#include <mdialog>
#include <mxINI>

// подключаем все .inc файлы

#include <..\core\database\db_connect.inc>
#include <..\core\database\db_core.inc>
#include <..\core\utils\message.inc>
#include <..\modules\features\dialog.inc>
#include <..\modules\features\veh.inc>
#include <..\modules\map\spawn_ls.inc>
#include <..\modules\player\player_core.inc>
#include <..\modules\player\player_veh.inc>

public OnRconCommand(cmd[])
{
	return 1;
}
