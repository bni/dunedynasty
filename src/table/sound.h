#ifndef TABLE_SOUND_H
#define TABLE_SOUND_H

#include "types.h"

/** Number of voices in the game. */
#define NUM_VOICES 131

/** Maximal number of spoken audio fragments in one message. */
#define NUM_SPEECH_PARTS 5

enum MusicSet {
	MUSICSET_DUNE2_ADLIB,
	MUSICSET_DUNE2_MIDI,
	MUSICSET_FLUIDSYNTH,
	MUSICSET_SHAIWA_MT32,   /* fed2k_mt32 */
	MUSICSET_RCBLANKE_SC55,
	MUSICSET_D2TM_ADLIB,
	MUSICSET_D2TM_SC55,
	MUSICSET_DUNE2_PCSPEAKER,
	MUSICSET_DUNE2_SMD,
	MUSICSET_DUNE2000,
	MUSICSET_DUNE1992_ADLIB,
	MUSICSET_DUNE1992_SCDB,
	MUSICSET_DUNE1992_SPICEOPERA,
	MUSICSET_DUNE1984_OST,
	MUSICSET_DUNE2021_OST,
	MUSICSET_DUNE2021_SKETCHBOOK,

	NUM_MUSIC_SETS,
	MUSICSET_INVALID = 0xFFFF
};

enum MusicID {
	MUSIC_STOP,
	MUSIC_LOGOS,
	MUSIC_INTRO,
	MUSIC_MAIN_MENU,
	MUSIC_STRATEGIC_MAP,
	MUSIC_CUTSCENE,
	MUSIC_CREDITS,
	MUSIC_BRIEFING_HARKONNEN,   MUSIC_BRIEFING_ATREIDES,    MUSIC_BRIEFING_ORDOS,
	MUSIC_WIN_HARKONNEN,        MUSIC_WIN_ATREIDES ,        MUSIC_WIN_ORDOS,
	MUSIC_LOSE_HARKONNEN,       MUSIC_LOSE_ATREIDES,        MUSIC_LOSE_ORDOS,
	MUSIC_END_GAME_HARKONNEN,   MUSIC_END_GAME_ATREIDES,    MUSIC_END_GAME_ORDOS,
	MUSIC_IDLE1,    MUSIC_IDLE2,    MUSIC_IDLE3,    MUSIC_IDLE4,    MUSIC_IDLE5,
	MUSIC_IDLE6,    MUSIC_IDLE7,    MUSIC_IDLE8,    MUSIC_IDLE9,    MUSIC_IDLE_OTHER,
	MUSIC_BONUS,
	MUSIC_ATTACK1,  MUSIC_ATTACK2,  MUSIC_ATTACK3,  MUSIC_ATTACK4,  MUSIC_ATTACK5,
	MUSIC_ATTACK6,
	MUSIC_ATTACK_OTHER,

	MUSICID_MAX,
	MUSIC_RANDOM_IDLE = 0xFFFD,
	MUSIC_RANDOM_ATTACK = 0xFFFE,
	MUSIC_INVALID = 0xFFFF
};

enum MusicFlags {
	MUSIC_WANT      = 0x1,
	MUSIC_FOUND     = 0x2,
	MUSIC_ENABLE    = (MUSIC_FOUND | MUSIC_WANT)
};

enum SampleSet {
	SAMPLESET_HARKONNEN,
	SAMPLESET_ATREIDES,
	SAMPLESET_ORDOS,
	SAMPLESET_BENE_GESSERIT,
	SAMPLESET_INVALID
};

enum SampleID {
	SAMPLE_SCREAM1 = 0,
	SAMPLE_EXPLODE_SAND = 1,
	SAMPLE_ROCKET = 2,
	SAMPLE_BUTTON = 3,
	SAMPLE_SCREAM5 = 4,
	SAMPLE_STRUCTURE_DESTROYED = 5,
	SAMPLE_EXPLODE_SMALL = 6,
	SAMPLE_EXPLODE_MEDIUM = 7,
	SAMPLE_EXPLODE_LARGE = 8,
	SAMPLE_EXPLODE_CANNON = 9,
	SAMPLE_MACHINE_GUN = 10,
	SAMPLE_GUN = 11,
	SAMPLE_EXPLODE_GAS = 12,
	SAMPLE_PLACEMENT = 13,
	SAMPLE_SCREAM2 = 14,
	SAMPLE_SCREAM3 = 15,
	SAMPLE_SCREAM4 = 16,
	SAMPLE_AFFIRMATIVE = 17,
	SAMPLE_YES_SIR = 18,
	SAMPLE_REPORTING = 19,
	SAMPLE_ACKNOWLEDGED = 20,
	SAMPLE_INFANTRY_OUT = 21,
	SAMPLE_MOVING_OUT = 22,
	SAMPLE_COME_TO_POPPA = 23, /* unused */
	SAMPLE_SOMETHINGS_UNDER_THE_SAND = 24, /* unused */
	SAMPLE_RADAR_STATIC = 25,
	SAMPLE_SANDWORM = 26,
	SAMPLE_MINI_ROCKET = 27,
	SAMPLE_SQUISH = 28,

	SAMPLE_VOICE_FRAGMENT_ENEMY = 29,
	SAMPLE_VOICE_FRAGMENT_HARKONNEN = 30,
	SAMPLE_VOICE_FRAGMENT_ATREIDES = 31,
	SAMPLE_VOICE_FRAGMENT_ORDOS = 32,
	SAMPLE_VOICE_FRAGMENT_FREMEN = 33,
	SAMPLE_VOICE_FRAGMENT_SARDAUKAR = 34,
	SAMPLE_VOICE_FRAGMENT_MERCENARY = 35, /* silent */
	SAMPLE_VOICE_FRAGMENT_UNIT = 36,
	SAMPLE_VOICE_FRAGMENT_STRUCTURE = 37,
	SAMPLE_VOICE_FRAGMENT_ONE = 38,
	SAMPLE_VOICE_FRAGMENT_TWO = 39,
	SAMPLE_VOICE_FRAGMENT_THREE = 40,
	SAMPLE_VOICE_FRAGMENT_FOUR = 41,
	SAMPLE_VOICE_FRAGMENT_FIVE = 42,
	SAMPLE_VOICE_FRAGMENT_CONSTRUCTION_COMPLETE = 43,
	SAMPLE_VOICE_FRAGMENT_RADAR = 44,
	SAMPLE_VOICE_FRAGMENT_DEACTIVATED = 45,
	SAMPLE_VOICE_FRAGMENT_ACTIVATED = 46,
	SAMPLE_VOICE_FRAGMENT_FRIGATE = 47,
	SAMPLE_VOICE_FRAGMENT_HAS_ARRIVED = 48,
	SAMPLE_VOICE_FRAGMENT_WARNING = 49,
	SAMPLE_VOICE_FRAGMENT_SABOTEUR = 50,
	SAMPLE_VOICE_FRAGMENT_MISSILE = 51,
	SAMPLE_VOICE_FRAGMENT_SPICE_BLOOM = 52,
	SAMPLE_VOICE_FRAGMENT_DESTROYED = 53,
	SAMPLE_VOICE_FRAGMENT_DEPLOYED = 54,
	SAMPLE_VOICE_FRAGMENT_APPROACHING = 55,
	SAMPLE_VOICE_FRAGMENT_LOCATED = 56,
	SAMPLE_VOICE_FRAGMENT_FROM_THE_NORTH = 57,
	SAMPLE_VOICE_FRAGMENT_FROM_THE_EAST = 58,
	SAMPLE_VOICE_FRAGMENT_FROM_THE_SOUTH = 59,
	SAMPLE_VOICE_FRAGMENT_FROM_THE_WEST = 60,
	SAMPLE_VOICE_FRAGMENT_YOUR_MISSION_IS_COMPLETE = 61,
	SAMPLE_VOICE_FRAGMENT_YOU_HAVE_FAILED_YOUR_MISSION = 62,
	SAMPLE_VOICE_FRAGMENT_LAUNCHED = 63,
	SAMPLE_VOICE_FRAGMENT_OUR_BASE_IS_UNDER_ATTACK = 64,
	SAMPLE_VOICE_FRAGMENT_VEHICLE = 65,
	SAMPLE_VOICE_FRAGMENT_REPAIRED = 66,
	SAMPLE_VOICE_FRAGMENT_HARVESTER = 67,
	SAMPLE_VOICE_FRAGMENT_WORM_SIGN = 68,
	SAMPLE_VOICE_FRAGMENT_CAPTURED = 69,
	SAMPLE_VOICE_FRAGMENT_SELECT = 70,
	SAMPLE_VOICE_FRAGMENT_YOUR_NEXT_CONQUEST = 71,

	SAMPLE_BLASTER = 72, /* Harkonnen end game. */
	SAMPLE_GLASS = 73, /* Harkonnen end game. */
	SAMPLE_LIZARD = 74, /* Ordos end game. */
	SAMPLE_FLESH = 75, /* Harkonnen end game. */
	SAMPLE_CLICK = 76, /* Harkonnen end game. */

	/* Intro movie sounds, values [77, 119]. */
	SAMPLE_INTRO_DUNE = 87,
	SAMPLE_INTRO_THE_BUILDING = 82,
	SAMPLE_INTRO_OF_A_DYNASTY = 88,
	SAMPLE_INTRO_THE_PLANET_ARRAKIS = 111,
	SAMPLE_INTRO_KNOWN_AS_DUNE = 105,
	SAMPLE_INTRO_LAND_OF_SAND = 114,
	SAMPLE_INTRO_HOME = 101,
	SAMPLE_INTRO_OF_THE_SPICE = 115,
	SAMPLE_INTRO_MELANGE = 106,
	SAMPLE_INTRO_THE_SPICE = 116,
	SAMPLE_INTRO_CONTROLS = 86,
	SAMPLE_INTRO_THE_EMPIRE = 93,
	SAMPLE_INTRO_WHOEVER = 118,
	SAMPLE_INTRO_CONTROLS_DUNE = 83,
	SAMPLE_INTRO_CONTROLS_THE_SPICE = 84,
	SAMPLE_INTRO_THE_EMPEROR = 104,
	SAMPLE_INTRO_HAS_PROPOSED_A_CHALLENGE = 113,
	SAMPLE_INTRO_TO_EACH_OF_THE_HOUSES = 89,
	SAMPLE_INTRO_THE_HOUSE = 92,
	SAMPLE_INTRO_THAT_PRODUCES = 94,
	SAMPLE_INTRO_THE_MOST_SPICE = 97,
	SAMPLE_INTRO_WILL_CONTROL_DUNE = 91,
	SAMPLE_INTRO_THERE_ARE_NO_SET = 98,
	SAMPLE_INTRO_TERRITORIES = 96,
	SAMPLE_INTRO_AND_NO = 90,
	SAMPLE_INTRO_RULES_OF_ENGAGEMENT = 95,
	SAMPLE_INTRO_VAST_ARMIES = 117,
	SAMPLE_INTRO_HAVE_ARRIVED = 79,
	SAMPLE_INTRO_AND_NOW = 78,
	SAMPLE_INTRO_THREE_HOUSES_FIGHT = 77,
	SAMPLE_INTRO_FOR_CONTROL = 85,
	SAMPLE_INTRO_OF_DUNE = 109,
	SAMPLE_INTRO_THE_NOBLE_ATREIDES = 107,
	SAMPLE_INTRO_THE_INSIDIOUS = 103,
	SAMPLE_INTRO_ORDOS = 110,
	SAMPLE_INTRO_AND_THE = 99,
	SAMPLE_INTRO_EVIL_HARKONNEN = 100,
	SAMPLE_INTRO_ONLY_ONE_HOUSE = 102,
	SAMPLE_INTRO_WILL_PREVAIL = 112,
	SAMPLE_INTRO_YOUR = 119,
	SAMPLE_INTRO_BATTLE_FOR_DUNE = 80,
	SAMPLE_INTRO_BEGINS = 81,
	SAMPLE_INTRO_NOW = 108,

	SAMPLE_120 = 120,
	SAMPLE_DROP_LOAD = 121,
	SAMPLE_EXPLODE_TINY = 122,

	SAMPLE_INTRO_WIND = 123,
	SAMPLE_INTRO_HARVESTER = 124,
	SAMPLE_INTRO_FIRE_ORNITHOPTER_TROOPER = 125,
	SAMPLE_INTRO_BREAK_GLASS = 126,
	SAMPLE_INTRO_FIRE_LAUNCHER = 127,
	SAMPLE_INTRO_CARRYALL_FRIGATE = 128,
	SAMPLE_INTRO_TROOPER_EXPLODE1 = 129,
	SAMPLE_INTRO_TROOPER_EXPLODE2 = 130,

	SAMPLEID_MAX = 131,
	SAMPLE_INVALID = 0xFFFF
};

enum SoundID {
	EFFECT_FADE_OUT = 1,
	SOUND_PLACEMENT = 20,
	EFFECT_WORM_SIGN_OUR_BASE_IS_UNDER_ATTACK = 23,
	SOUND_DROP_LOAD = 24,
	SOUND_SCREAM1 = 30,
	SOUND_SCREAM5 = 31,
	SOUND_SCREAM2 = 32,
	SOUND_SCREAM3 = 33,
	SOUND_SCREAM4 = 34,
	SOUND_SQUISH = 35,
	EFFECT_SET_TARGET = 36,
	EFFECT_HALL_OF_FAME_END_METER = 38,
	SOUND_ROCKET = 42,
	EFFECT_SONIC_BLAST = 43,
	SOUND_STRUCTURE_DESTROYED = 44,
	EFFECT_COUNT_DOWN_TICK = 46,
	EFFECT_ERROR_OCCURRED = 47,
	EFFECT_CREDITS_INCREASE = 52,
	EFFECT_CREDITS_DECREASE = 53,
	SOUND_TANK = 57,
	SOUND_GUN = 58,
	SOUND_MACHINE_GUN = 59,
	SOUND_CONSTRUCTION_COMPLETE = 60,
	SOUND_RADAR_STATIC = 62,
	SOUND_SANDWORM = 63,
	SOUND_MINI_ROCKET = 64,
	SOUND_END_GAME_BLASTER = 65,
	SOUND_END_GAME_GLASS = 66,
	SOUND_END_GAME_LIZARD = 67,
	SOUND_END_GAME_FLESH = 68,
	SOUND_END_GAME_CLICK = 69,

	SOUNDID_MAX = 120,
	SOUND_INVALID = 0xFFFF
};

enum VoiceID {
	VOICE_CONSTRUCTION_COMPLETE = 0,

	VOICE_WARNING_ENEMY_UNIT_APPROACHING = 1,
	VOICE_WARNING_ENEMY_UNIT_APPROACHING_FROM_THE_NORTH = 2,
	VOICE_WARNING_ENEMY_UNIT_APPROACHING_FROM_THE_EAST = 3,
	VOICE_WARNING_ENEMY_UNIT_APPROACHING_FROM_THE_SOUTH = 4,
	VOICE_WARNING_ENEMY_UNIT_APPROACHING_FROM_THE_WEST = 5,
	VOICE_WARNING_HARKONNEN_UNIT_APPROACHING = 6,
	VOICE_WARNING_ATREIDES_UNIT_APPROACHING = 7,
	VOICE_WARNING_ORDOS_UNIT_APPROACHING = 8,
	VOICE_WARNING_FREMEN_UNIT_APPROACHING = 9,
	VOICE_WARNING_SARDAUKAR_UNIT_APPROACHING = 10, /* "Warning, Sardaukar approaching" */
	VOICE_WARNING_UNIT_APPROACHING = 11, /* "Warning, unit approaching" */
	VOICE_WARNING_SABOTEUR_APPROACHING = 12,

	VOICE_ENEMY_UNIT_DESTROYED = 13,
	VOICE_HARKONNEN_UNIT_DESTROYED = 14,
	VOICE_ATREIDES_UNIT_DESTROYED = 15,
	VOICE_ORDOS_UNIT_DESTROYED = 16,
	VOICE_FREMEN_UNIT_DESTROYED = 17,
	VOICE_SARDAUKAR_UNIT_DESTROYED = 18, /* "Sardaukar destroyed" */
	VOICE_MERCENARY_UNIT_DESTROYED = 19, /* "Unit destroyed" */
	VOICE_SABOTEUR_DESTROYED = 20,

	VOICE_ENEMY_STRUCTURE_DESTROYED = 21,
	VOICE_HARKONNEN_STRUCTURE_DESTROYED = 22,
	VOICE_ATREIDES_STRUCTURE_DESTROYED = 23,
	VOICE_ORDOS_STRUCTURE_DESTROYED = 24,
	VOICE_FREMEN_STRUCTURE_DESTROYED = 25,
	VOICE_SARDAUKAR_STRUCTURE_DESTROYED = 26, /* "Sardaukar destroyed" */
	VOICE_MERCENARY_STRUCTURE_DESTROYED = 27, /* "Structure destroyed" */

	VOICE_RADAR_ACTIVATED = 28,
	VOICE_RADAR_DEACTIVATED = 29,

	VOICE_HARKONNEN_UNIT_DEPLOYED = 30,
	VOICE_ATREIDES_UNIT_DEPLOYED = 31,
	VOICE_ORDOS_UNIT_DEPLOYED = 32,
	VOICE_FREMEN_UNIT_DEPLOYED = 33,
	VOICE_SARADUKAR_UNIT_DEPLOYED = 34, /* "Sardaukar deployed" */
	VOICE_MERCENARY_UNIT_DEPLOYED = 35, /* "Unit deployed" */

	VOICE_SPICE_BLOOM_LOCATED = 36,
	VOICE_WARNING_WORM_SIGN = 37,
	VOICE_FRIGATE_HAS_ARRIVED = 38,
	VOICE_WARNING_MISSILE_APPROACHING = 39,
	VOICE_YOUR_MISSION_IS_COMPLETE = 40,
	VOICE_YOU_HAVE_FAILED_YOUR_MISSION = 41,
	VOICE_MISSILE_LAUNCHED = 42,

	VOICE_ONE = 43,
	VOICE_TWO = 44,
	VOICE_THREE = 45,
	VOICE_FOUR = 46,
	VOICE_FIVE = 47,

	VOICE_OUR_BASE_IS_UNDER_ATTACK = 48,

	VOICE_HARKONNEN_UNIT_LAUNCHED = 49,
	VOICE_ATREIDES_UNIT_LAUNCHED = 50,
	VOICE_ORDOS_UNIT_LAUNCHED = 51,
	VOICE_FREMEN_UNIT_LAUNCHED = 52,
	VOICE_SARDAUKAR_UNIT_LAUNCHED = 53,
	VOICE_MERCENARY_UNIT_LAUNCHED = 54, /* "Unit launched" */

	VOICE_HARKONNEN_VEHICLE_REPAIRED = 55,
	VOICE_ATREIDES_VEHICLE_REPAIRED = 56,
	VOICE_ORDOS_VEHICLE_REPAIRED = 57,
	VOICE_FREMEN_VEHICLE_REPAIRED = 58,
	VOICE_SARDAUKAR_VEHICLE_REPAIRED = 59,
	VOICE_MERCENARY_VEHICLE_REPAIRED = 60, /* "Vehicle repaired" */

	VOICE_SELECT_YOUR_NEXT_CONQUEST = 61,

	VOICE_HARKONNEN = 62,
	VOICE_ATREIDES = 63,
	VOICE_ORDOS = 64,
	VOICE_FREMEN = 65,
	VOICE_SARDAUKAR = 66,
	VOICE_MERCENARY = 67, /* silent */

	VOICE_HARKONNEN_HARVESTER_DEPLOYED = 68,
	VOICE_ATREIDES_HARVESTER_DEPLOYED = 69,
	VOICE_ORDOS_HARVESTER_DEPLOYED = 70,
	VOICE_FREMEN_HARVESTER_DEPLOYED = 71,
	VOICE_SARDAUKAR_HARVESTER_DEPLOYED = 72,
	VOICE_MERCENARY_HARVESTER_DEPLOYED = 73, /* "Harvester deployed" */

	VOICE_INTRO_PRESENT = 74,
	VOICE_INTRO_DUNE = 75,
	VOICE_INTRO_THE_BUILDING_OF_A_DYNASTY = 76,
	VOICE_INTRO_THE_PLANET_ARRAKIS_KNOWN_AS_DUNE = 77,
	VOICE_INTRO_LAND_OF_SAND = 78,
	VOICE_INTRO_HOME_OF_THE_SPICE_MELANGE = 79,
	VOICE_INTRO_THE_SPICE_CONTROLS_THE_EMPIRE = 80,
	VOICE_INTRO_WHOEVER_CONTROLS_DUNE_CONTROLS_THE_SPICE = 81,
	VOICE_INTRO_THE_EMPEROR_HAS_PROPOSED_A_CHALLENGE_TO_EACH_OF_THE_HOUSES = 82,
	VOICE_INTRO_THE_HOUSE_THAT_PRODUCES_THE_MOST_SPICE_WILL_CONTROL_DUNE = 83,
	VOICE_INTRO_THERE_ARE_NO_SET_TERRITORIES = 84,
	VOICE_INTRO_AND_NO_RULES_OF_ENGAGEMENT = 85,
	VOICE_INTRO_VAST_ARMIES_HAVE_ARRIVED = 86,
	VOICE_INTRO_AND_NOW_THREE_HOUSES_FIGHT_FOR_CONTROL_OF_DUNE = 87,
	VOICE_INTRO_THE_NOBLE_ATREIDES = 88,
	VOICE_INTRO_THE_INSIDIOUS_ORDOS = 89,
	VOICE_INTRO_AND_THE_EVIL_HARKONNEN = 90,
	VOICE_INTRO_ONLY_ONE_HOUSE_WILL_PREVAIL = 91,
	VOICE_INTRO_YOUR_BATTLE_FOR_DUNE_BEGINS = 92,
	VOICE_INTRO_NOW = 93,

	VOICE_ENEMY_STRUCTURE_CAPTURED = 94,
	VOICE_HARKONNEN_STRUCTURE_CAPTURED = 95,
	VOICE_ATREIDES_STRUCTURE_CAPTURED = 96,
	VOICE_ORDOS_STRUCTURE_CAPTURED = 97,
	VOICE_FREMEN_STRUCTURE_CAPTURED = 98,
	VOICE_SARDAUKAR_STRUCTURE_CAPTURED = 99,
	VOICE_MERCENARY_STRUCTURE_CAPTURED = 100, /* "Structure captured" */

	VOICEID_MAX = 101,
	VOICE_STOP = 0xFFFE,
	VOICE_INVALID = 0xFFFF
};

typedef struct MusicSetInfo {
	bool enable;
	const char *prefix;
	const char *name;
} MusicSetInfo;

typedef struct MusicInfo {
	unsigned int enable;
	enum MusicSet music_set;

	const char *songname;
	const char *filename;
	int track;
	float volume;
} MusicInfo;

typedef struct {
	int count;
	int count_default;
	int count_found;
	const char *songname;
	int length;
	MusicInfo *song;
} MusicList;

/** Information about sound files. */
typedef struct SoundData {
	const char *string; /*!< Pointer to a string. */
	uint16 variable_04; /*!< ?? */
} SoundData;

/** Audio and visual feedback about events and commands. */
typedef struct Feedback {
	enum SampleID voiceId[NUM_SPEECH_PARTS];
	uint16 messageId;                 /*!< Message to display in the viewport when audio is disabled. */
	enum SoundID soundId;
} Feedback;

extern MusicSetInfo g_table_music_set[NUM_MUSIC_SETS];
extern MusicList g_table_music[MUSICID_MAX];
extern const SoundData g_table_voices[SAMPLEID_MAX];
extern const enum SampleID g_table_voiceMapping[SOUNDID_MAX];
extern const Feedback g_feedback[VOICEID_MAX];
extern const enum SampleID g_translatedVoice[VOICEID_MAX][NUM_SPEECH_PARTS];

#endif
