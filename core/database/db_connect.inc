#define MySQL_HOST	"127.0.0.1"
#define MySQL_USER	"root"
#define MySQL_PASS	""
#define MySQL_BASE	"test"

new dbConnect;

public OnGameModeInit()
{
	dbConnect = mysql_connect(MySQL_HOST, MySQL_USER, MySQL_BASE, MySQL_PASS);
	MySQL_Connection();
	SetGameModeText("Beee");
	return 1;
}

stock MySQL_Connection()
{
	switch(mysql_errno())
	{
		case 0: print("Подключение к БД успешно!");
		default: printf("Подключение к БД ошибка %d!", mysql_errno());
	}
	return 1;
}

public OnGameModeExit()
{
	return 1;
}
