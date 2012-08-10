/** @file src/enhancement.h Enhancements to the original game. */

#ifndef ENHANCEMENT_H
#define ENHANCEMENT_H

#include <stdbool.h>

enum SecurityQuestionMode {
	SECURITY_QUESTION_ENABLE,
	SECURITY_QUESTION_ACCEPT_ALL,
	SECURITY_QUESTION_SKIP
};

extern bool g_dune2_enhanced;
extern bool enhancement_fix_enemy_approach_direction_warning;
extern bool enhancement_fix_everlasting_unit_wobble;
extern bool enhancement_fix_firing_rates_and_ranges;
extern bool enhancement_fix_ix_colour_remapping;
extern bool enhancement_fix_selection_after_entering_structure;
extern bool enhancement_i_mean_where_i_clicked;
extern bool enhancement_insatiable_sandworms;
extern bool enhancement_new_selection_cursor;
extern bool enhancement_nonblocking_radar_animation;
extern bool enhancement_read_scenario_structure_health;
extern bool enhancement_repeat_reinforcements;
extern enum SecurityQuestionMode enhancement_security_question;
extern bool enhancement_special_trooper_portaits;
extern bool enhancement_structures_on_concrete_do_not_degrade;

#endif
