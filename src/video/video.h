#ifndef VIDEO_VIDEO_H
#define VIDEO_VIDEO_H

enum CPSID {
	CPS_MENUBAR_LEFT,
	CPS_MENUBAR_MIDDLE,
	CPS_MENUBAR_RIGHT,
	CPS_STATUSBAR_LEFT,
	CPS_STATUSBAR_MIDDLE,
	CPS_STATUSBAR_RIGHT,
	CPS_SIDEBAR_TOP,
	CPS_SIDEBAR_MIDDLE,
	CPS_SIDEBAR_BOTTOM,
	CPS_CONQUEST_EN,
	CPS_CONQUEST_FR,
	CPS_CONQUEST_DE,

	CPS_SPECIAL_MAX
};

struct FadeInAux;

#include "prim.h"
#include "video_a5.h"

#define Video_Init()            true
#define Video_Uninit()
#define Video_Tick              VideoA5_Tick
#define Video_SetPalette        VideoA5_SetPalette
#define Video_SetClippingArea   VideoA5_SetClippingArea
#define Video_SetCursor         VideoA5_SetCursor
#define Video_ShowCursor        VideoA5_ShowCursor
#define Video_HideCursor        VideoA5_HideCursor

#define Video_DrawCPS           VideoA5_DrawCPS
#define Video_DrawCPSRegion     VideoA5_DrawCPSRegion
#define Video_DrawCPSSpecial    VideoA5_DrawCPSSpecial
#define Video_DrawIcon          VideoA5_DrawIcon
#define Video_DrawChar          VideoA5_DrawChar
#define Video_DrawWSA           VideoA5_DrawWSA
#define Video_DrawWSAStatic     VideoA5_DrawWSAStatic

#define Video_DrawFadeIn        VideoA5_DrawFadeIn
#define Video_TickFadeIn        VideoA5_TickFadeIn
#define Video_InitFadeInCPS     VideoA5_InitFadeInCPS
#define Video_InitFadeInShape   VideoA5_InitFadeInShape

#define GUI_DrawLine            VideoA5_DrawLine
#define GUI_DrawWiredRectangle  Prim_Rect_i
#define GUI_DrawFilledRectangle Prim_FillRect_i
#define GUI_DrawFilledRectRGBA  Prim_FillRect_RGBA
#define Video_ShadeScreen       VideoA5_ShadeScreen

#define GUI_Mouse_Show()
#define GUI_Mouse_Hide()
#define GUI_Mouse_Show_Safe()
#define GUI_Mouse_Hide_Safe()
#define GUI_Mouse_Show_InRegion()
#define GUI_Mouse_Hide_InRegion(l,t,r,b)
#define GUI_Mouse_Show_InWidget()   \
	do {} while (false)
#define GUI_Mouse_Hide_InWidget(w)

#if 0
#include "video_sdl.h"

#define Video_Init                  VideoSDL_Init
#define Video_Uninit                VideoSDL_Uninit
#define Video_Tick                  VideoSDL_Tick
#define Video_SetPalette            VideoSDL_SetPalette
#define Video_Mouse_SetPosition     VideoSDL_Mouse_SetPosition
#define Video_Mouse_SetRegion       VideoSDL_Mouse_SetRegion
#endif

#endif
