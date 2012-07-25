set(DUNEDYNASTY_SRC_FILES
	src/animation.c
	src/audio/driver.c
	src/audio/dsp_alsa.c
	src/audio/midi_alsa.c
	src/audio/mt32mpu.c
	src/audio/sound.c
	src/codec/format40.c
	src/codec/format80.c
	src/common_a5.c
	src/config.c
	src/crashlog/crashlog_none.c
	src/enhancement.c
	src/explosion.c
	src/file.c
	src/gfx.c
	src/gui/editbox.c
	src/gui/font.c
	src/gui/gui.c
	src/gui/mentat.c
	src/gui/security.c
	src/gui/viewport.c
	src/gui/widget.c
	src/gui/widget_click.c
	src/gui/widget_draw.c
	src/house.c
	src/ini.c
	src/input/input.c
	src/input/mouse.c
	src/load.c
	src/map.c
	src/object.c
	src/opendune.c
	src/os/error.c
	src/pool/house.c
	src/pool/structure.c
	src/pool/team.c
	src/pool/unit.c
	src/save.c
	src/saveload/house.c
	src/saveload/info.c
	src/saveload/object.c
	src/saveload/saveload.c
	src/saveload/scenario.c
	src/saveload/scriptengine.c
	src/saveload/structure.c
	src/saveload/team.c
	src/saveload/unit.c
	src/scenario.c
	src/script/general.c
	src/script/script.c
	src/script/structure.c
	src/script/team.c
	src/script/unit.c
	src/sprites.c
	src/string.c
	src/structure.c
	src/table/actioninfo.c
	src/table/animation.c
	src/table/explosion.c
	src/table/fileinfo.c
	src/table/houseanimation.c
	src/table/houseinfo.c
	src/table/landscapeinfo.c
	src/table/movementtype.c
	src/table/selectiontype.c
	src/table/sound.c
	src/table/structureinfo.c
	src/table/teamaction.c
	src/table/tilediff.c
	src/table/unitinfo.c
	src/table/widget.c
	src/table/widgetinfo.c
	src/table/windowdesc.c
	src/team.c
	src/tile.c
	src/timer/timer_a5.c
	src/timer/timer_common.c
	src/tools.c
	src/unit.c
	src/video/video_sdl.c
	src/wsa.c
	)

set(OPENDUNE_UNUSED_SRC_FILES
	src/audio/dsp_none.c
	src/audio/dsp_sdl.c
	src/audio/dsp_win32.c
	src/audio/midi_none.c
	src/audio/midi_win32.c
	src/crashlog/crashlog.c
	src/crashlog/crashlog_win32.c
	src/os/error_win32.c
	src/timer/timer_opendune.c
	src/video/video_win32.c
	)
