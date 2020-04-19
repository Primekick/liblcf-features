/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveSystem.

template <>
char const* const Struct<RPG::SaveSystem>::name = "SaveSystem";
static TypedField<RPG::SaveSystem, int32_t> static_scene(
	&RPG::SaveSystem::scene,
	LSD_Reader::ChunkSaveSystem::scene,
	"scene",
	1,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_frame_count(
	&RPG::SaveSystem::frame_count,
	LSD_Reader::ChunkSaveSystem::frame_count,
	"frame_count",
	0,
	0
);
static TypedField<RPG::SaveSystem, std::string> static_graphics_name(
	&RPG::SaveSystem::graphics_name,
	LSD_Reader::ChunkSaveSystem::graphics_name,
	"graphics_name",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_message_stretch(
	&RPG::SaveSystem::message_stretch,
	LSD_Reader::ChunkSaveSystem::message_stretch,
	"message_stretch",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_font_id(
	&RPG::SaveSystem::font_id,
	LSD_Reader::ChunkSaveSystem::font_id,
	"font_id",
	0,
	0
);
static CountField<RPG::SaveSystem, bool> static_size_switches(
	&RPG::SaveSystem::switches,
	LSD_Reader::ChunkSaveSystem::switches_size,
	0,
	0
);
static TypedField<RPG::SaveSystem, std::vector<bool>> static_switches(
	&RPG::SaveSystem::switches,
	LSD_Reader::ChunkSaveSystem::switches,
	"switches",
	1,
	0
);
static CountField<RPG::SaveSystem, int32_t> static_size_variables(
	&RPG::SaveSystem::variables,
	LSD_Reader::ChunkSaveSystem::variables_size,
	0,
	0
);
static TypedField<RPG::SaveSystem, std::vector<int32_t>> static_variables(
	&RPG::SaveSystem::variables,
	LSD_Reader::ChunkSaveSystem::variables,
	"variables",
	1,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_message_transparent(
	&RPG::SaveSystem::message_transparent,
	LSD_Reader::ChunkSaveSystem::message_transparent,
	"message_transparent",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_message_position(
	&RPG::SaveSystem::message_position,
	LSD_Reader::ChunkSaveSystem::message_position,
	"message_position",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_message_prevent_overlap(
	&RPG::SaveSystem::message_prevent_overlap,
	LSD_Reader::ChunkSaveSystem::message_prevent_overlap,
	"message_prevent_overlap",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_message_continue_events(
	&RPG::SaveSystem::message_continue_events,
	LSD_Reader::ChunkSaveSystem::message_continue_events,
	"message_continue_events",
	0,
	0
);
static TypedField<RPG::SaveSystem, std::string> static_face_name(
	&RPG::SaveSystem::face_name,
	LSD_Reader::ChunkSaveSystem::face_name,
	"face_name",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_face_id(
	&RPG::SaveSystem::face_id,
	LSD_Reader::ChunkSaveSystem::face_id,
	"face_id",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_face_right(
	&RPG::SaveSystem::face_right,
	LSD_Reader::ChunkSaveSystem::face_right,
	"face_right",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_face_flip(
	&RPG::SaveSystem::face_flip,
	LSD_Reader::ChunkSaveSystem::face_flip,
	"face_flip",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_message_active(
	&RPG::SaveSystem::message_active,
	LSD_Reader::ChunkSaveSystem::message_active,
	"message_active",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_music_stopping(
	&RPG::SaveSystem::music_stopping,
	LSD_Reader::ChunkSaveSystem::music_stopping,
	"music_stopping",
	0,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_title_music(
	&RPG::SaveSystem::title_music,
	LSD_Reader::ChunkSaveSystem::title_music,
	"title_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_battle_music(
	&RPG::SaveSystem::battle_music,
	LSD_Reader::ChunkSaveSystem::battle_music,
	"battle_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_battle_end_music(
	&RPG::SaveSystem::battle_end_music,
	LSD_Reader::ChunkSaveSystem::battle_end_music,
	"battle_end_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_inn_music(
	&RPG::SaveSystem::inn_music,
	LSD_Reader::ChunkSaveSystem::inn_music,
	"inn_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_current_music(
	&RPG::SaveSystem::current_music,
	LSD_Reader::ChunkSaveSystem::current_music,
	"current_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_before_vehicle_music(
	&RPG::SaveSystem::before_vehicle_music,
	LSD_Reader::ChunkSaveSystem::before_vehicle_music,
	"before_vehicle_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_before_battle_music(
	&RPG::SaveSystem::before_battle_music,
	LSD_Reader::ChunkSaveSystem::before_battle_music,
	"before_battle_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_stored_music(
	&RPG::SaveSystem::stored_music,
	LSD_Reader::ChunkSaveSystem::stored_music,
	"stored_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_boat_music(
	&RPG::SaveSystem::boat_music,
	LSD_Reader::ChunkSaveSystem::boat_music,
	"boat_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_ship_music(
	&RPG::SaveSystem::ship_music,
	LSD_Reader::ChunkSaveSystem::ship_music,
	"ship_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_airship_music(
	&RPG::SaveSystem::airship_music,
	LSD_Reader::ChunkSaveSystem::airship_music,
	"airship_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Music> static_gameover_music(
	&RPG::SaveSystem::gameover_music,
	LSD_Reader::ChunkSaveSystem::gameover_music,
	"gameover_music",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_cursor_se(
	&RPG::SaveSystem::cursor_se,
	LSD_Reader::ChunkSaveSystem::cursor_se,
	"cursor_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_decision_se(
	&RPG::SaveSystem::decision_se,
	LSD_Reader::ChunkSaveSystem::decision_se,
	"decision_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_cancel_se(
	&RPG::SaveSystem::cancel_se,
	LSD_Reader::ChunkSaveSystem::cancel_se,
	"cancel_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_buzzer_se(
	&RPG::SaveSystem::buzzer_se,
	LSD_Reader::ChunkSaveSystem::buzzer_se,
	"buzzer_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_battle_se(
	&RPG::SaveSystem::battle_se,
	LSD_Reader::ChunkSaveSystem::battle_se,
	"battle_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_escape_se(
	&RPG::SaveSystem::escape_se,
	LSD_Reader::ChunkSaveSystem::escape_se,
	"escape_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_enemy_attack_se(
	&RPG::SaveSystem::enemy_attack_se,
	LSD_Reader::ChunkSaveSystem::enemy_attack_se,
	"enemy_attack_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_enemy_damaged_se(
	&RPG::SaveSystem::enemy_damaged_se,
	LSD_Reader::ChunkSaveSystem::enemy_damaged_se,
	"enemy_damaged_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_actor_damaged_se(
	&RPG::SaveSystem::actor_damaged_se,
	LSD_Reader::ChunkSaveSystem::actor_damaged_se,
	"actor_damaged_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_dodge_se(
	&RPG::SaveSystem::dodge_se,
	LSD_Reader::ChunkSaveSystem::dodge_se,
	"dodge_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_enemy_death_se(
	&RPG::SaveSystem::enemy_death_se,
	LSD_Reader::ChunkSaveSystem::enemy_death_se,
	"enemy_death_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, RPG::Sound> static_item_se(
	&RPG::SaveSystem::item_se,
	LSD_Reader::ChunkSaveSystem::item_se,
	"item_se",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_transition_out(
	&RPG::SaveSystem::transition_out,
	LSD_Reader::ChunkSaveSystem::transition_out,
	"transition_out",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_transition_in(
	&RPG::SaveSystem::transition_in,
	LSD_Reader::ChunkSaveSystem::transition_in,
	"transition_in",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_battle_start_fadeout(
	&RPG::SaveSystem::battle_start_fadeout,
	LSD_Reader::ChunkSaveSystem::battle_start_fadeout,
	"battle_start_fadeout",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_battle_start_fadein(
	&RPG::SaveSystem::battle_start_fadein,
	LSD_Reader::ChunkSaveSystem::battle_start_fadein,
	"battle_start_fadein",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_battle_end_fadeout(
	&RPG::SaveSystem::battle_end_fadeout,
	LSD_Reader::ChunkSaveSystem::battle_end_fadeout,
	"battle_end_fadeout",
	1,
	0
);
static TypedField<RPG::SaveSystem, int8_t> static_battle_end_fadein(
	&RPG::SaveSystem::battle_end_fadein,
	LSD_Reader::ChunkSaveSystem::battle_end_fadein,
	"battle_end_fadein",
	1,
	0
);
static TypedField<RPG::SaveSystem, bool> static_teleport_allowed(
	&RPG::SaveSystem::teleport_allowed,
	LSD_Reader::ChunkSaveSystem::teleport_allowed,
	"teleport_allowed",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_escape_allowed(
	&RPG::SaveSystem::escape_allowed,
	LSD_Reader::ChunkSaveSystem::escape_allowed,
	"escape_allowed",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_save_allowed(
	&RPG::SaveSystem::save_allowed,
	LSD_Reader::ChunkSaveSystem::save_allowed,
	"save_allowed",
	0,
	0
);
static TypedField<RPG::SaveSystem, bool> static_menu_allowed(
	&RPG::SaveSystem::menu_allowed,
	LSD_Reader::ChunkSaveSystem::menu_allowed,
	"menu_allowed",
	0,
	0
);
static TypedField<RPG::SaveSystem, std::string> static_background(
	&RPG::SaveSystem::background,
	LSD_Reader::ChunkSaveSystem::background,
	"background",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_save_count(
	&RPG::SaveSystem::save_count,
	LSD_Reader::ChunkSaveSystem::save_count,
	"save_count",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_save_slot(
	&RPG::SaveSystem::save_slot,
	LSD_Reader::ChunkSaveSystem::save_slot,
	"save_slot",
	0,
	0
);
static TypedField<RPG::SaveSystem, int32_t> static_atb_mode(
	&RPG::SaveSystem::atb_mode,
	LSD_Reader::ChunkSaveSystem::atb_mode,
	"atb_mode",
	0,
	1
);


template <>
Field<RPG::SaveSystem> const* Struct<RPG::SaveSystem>::fields[] = {
	&static_scene,
	&static_frame_count,
	&static_graphics_name,
	&static_message_stretch,
	&static_font_id,
	&static_size_switches,
	&static_switches,
	&static_size_variables,
	&static_variables,
	&static_message_transparent,
	&static_message_position,
	&static_message_prevent_overlap,
	&static_message_continue_events,
	&static_face_name,
	&static_face_id,
	&static_face_right,
	&static_face_flip,
	&static_message_active,
	&static_music_stopping,
	&static_title_music,
	&static_battle_music,
	&static_battle_end_music,
	&static_inn_music,
	&static_current_music,
	&static_before_vehicle_music,
	&static_before_battle_music,
	&static_stored_music,
	&static_boat_music,
	&static_ship_music,
	&static_airship_music,
	&static_gameover_music,
	&static_cursor_se,
	&static_decision_se,
	&static_cancel_se,
	&static_buzzer_se,
	&static_battle_se,
	&static_escape_se,
	&static_enemy_attack_se,
	&static_enemy_damaged_se,
	&static_actor_damaged_se,
	&static_dodge_se,
	&static_enemy_death_se,
	&static_item_se,
	&static_transition_out,
	&static_transition_in,
	&static_battle_start_fadeout,
	&static_battle_start_fadein,
	&static_battle_end_fadeout,
	&static_battle_end_fadein,
	&static_teleport_allowed,
	&static_escape_allowed,
	&static_save_allowed,
	&static_menu_allowed,
	&static_background,
	&static_save_count,
	&static_save_slot,
	&static_atb_mode,
	NULL
};

template class Struct<RPG::SaveSystem>;
