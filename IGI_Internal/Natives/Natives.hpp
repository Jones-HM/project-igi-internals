#pragma once
namespace IGI {
	enum class HASH
	{
		ASSEMBLE_QVM = 0x4BB270,
		COMPILE_CLEANUP = 0x4B83D0,
		COMPILE_CONFIG = 0x4F0CF0,
		COMPILE_QVM = 0x4B85B0,
		COMPILE_RESOURCE = 0x4B80B0,
		CONFIG_CREATE = 0x405BD0,
		CONFIG_PARSE = 0x405850,
		DISABLE_INPUT = 0x4157D0,
		ENABLE_INPUT = 0x415830,
		GAMEMATERIAL_LOAD = 0x0040835,
		GRAPH_OPEN = 0x4F9FF0,
		HUMANPLAYER_LOAD = 0x4137A0,
		LEVEL_LOAD = 0x4F0E10,
		LEVEL_LOAD_PARAM = 0x4F0D40,
		LEVEL_QUIT_PARAM = 0x401530,
		LEVEL_RESTART = 0x416FE0,
		LEVEL_RESTART_PARAM = 0x48A440,
		LEVEL_START = 0x415B30,
		LEVEL_START_INIT = 0x004012A0,
		LEVEL_START_LBL = 0x004869B0,
		LEVEL_START_MAIN = 0x00402070,
		LEVEL_START_PARAM = 0x401400,
		LEVEL_QUIT = 0x416550,
		LOAD_QVM = 0x004B80B0,
		LOAD_RESOURCE = 0x4B5F00,
		MENU_MANAGER = 0x418B00,
		QHASH_INIT = 0x4B0D60,
		QHASH_RESET = 0x004B0D90,
		QTASKLIST_UPDATE = 0x401B20,
		QTASK_UPDATE = 0x4F0E90,
		SYMBOL_REMOVE = 0x4C0460,
		RESOURCE_FLUSH = 0x4B63D0,
		SCRIPT_INIT = 0x4F0E50,
		SCRIPT_SETSYMBOL_CXT = 0x4B8930,
		SHOW_ERROR = 0x4AF7B0,
		SHOW_WARNING = 0x4AF810,
		STATUS_MESSAGE = 0x485970,
		STATUS_TIMER = 0x4F0EE0,
		TASKTYPE_SET = 0x4B8810,
		UNLOAD_RESOURCE = 0x4B6380,
		WEAPON_CONFIG_PARSE = 0x4071E0,
		GAME_SET_FRAMES = 0x402820,
	};
}