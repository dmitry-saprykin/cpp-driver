/*
  Copyright 2014 DataStax

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#include "error_response.hpp"

#include "serialization.hpp"

namespace cass {

bool ErrorResponse::decode(int version, char* buffer, size_t size) {
  char* pos = decode_int32(buffer, code_);
  pos = decode_string(pos, &message_, message_size_);
  switch (code_) {
    case CQL_ERROR_UNPREPARED:
      decode_string(pos, &prepared_id_, prepared_id_size_);
      break;
  }
  return true;
}

} // namespace cass
