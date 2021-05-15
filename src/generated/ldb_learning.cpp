/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2021 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lcf/ldb/reader.h"
#include "lcf/ldb/chunks.h"
#include "reader_struct_impl.h"

namespace lcf {

// Read Learning.

template <>
char const* const Struct<rpg::Learning>::name = "Learning";
static TypedField<rpg::Learning, int32_t> static_level(
	&rpg::Learning::level,
	LDB_Reader::ChunkLearning::level,
	"level",
	0,
	0
);
static TypedField<rpg::Learning, int32_t> static_skill_id(
	&rpg::Learning::skill_id,
	LDB_Reader::ChunkLearning::skill_id,
	"skill_id",
	0,
	0
);


template <>
Field<rpg::Learning> const* Struct<rpg::Learning>::fields[] = {
	&static_level,
	&static_skill_id,
	NULL
};

template class Struct<rpg::Learning>;

} //namespace lcf
