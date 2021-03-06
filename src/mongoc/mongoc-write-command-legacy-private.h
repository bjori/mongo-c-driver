/*
 * Copyright 2014-present MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef MONGOC_WRITE_COMMAND_LEGACY_PRIVATE_H
#define MONGOC_WRITE_COMMAND_LEGACY_PRIVATE_H

#if !defined(MONGOC_COMPILATION)
#error "Only <mongoc.h> can be included directly."
#endif

#include <bson.h>
#include "mongoc-client-private.h"
#include "mongoc-write-command-private.h"

BSON_BEGIN_DECLS

void
_mongoc_write_command_insert_legacy (
   mongoc_write_command_t *command,
   mongoc_client_t *client,
   mongoc_server_stream_t *server_stream,
   const char *database,
   const char *collection,
   const mongoc_write_concern_t *write_concern,
   uint32_t offset,
   mongoc_write_result_t *result,
   bson_error_t *error);
void
_mongoc_write_command_update_legacy (
   mongoc_write_command_t *command,
   mongoc_client_t *client,
   mongoc_server_stream_t *server_stream,
   const char *database,
   const char *collection,
   const mongoc_write_concern_t *write_concern,
   uint32_t offset,
   mongoc_write_result_t *result,
   bson_error_t *error);
void
_mongoc_write_command_delete_legacy (
   mongoc_write_command_t *command,
   mongoc_client_t *client,
   mongoc_server_stream_t *server_stream,
   const char *database,
   const char *collection,
   const mongoc_write_concern_t *write_concern,
   uint32_t offset,
   mongoc_write_result_t *result,
   bson_error_t *error);
void
_mongoc_write_result_merge_legacy (mongoc_write_result_t *result,
                                   mongoc_write_command_t *command,
                                   const bson_t *reply,
                                   int32_t error_api_version,
                                   mongoc_error_code_t default_code,
                                   uint32_t offset);
BSON_END_DECLS


#endif /* MONGOC_WRITE_COMMAND_LEGACY_PRIVATE_H */
