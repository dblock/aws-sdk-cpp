﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/qldb-session/model/StartSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

StartSessionRequest::StartSessionRequest() : 
    m_ledgerNameHasBeenSet(false)
{
}

StartSessionRequest::StartSessionRequest(JsonView jsonValue) : 
    m_ledgerNameHasBeenSet(false)
{
  *this = jsonValue;
}

StartSessionRequest& StartSessionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LedgerName"))
  {
    m_ledgerName = jsonValue.GetString("LedgerName");

    m_ledgerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSessionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ledgerNameHasBeenSet)
  {
   payload.WithString("LedgerName", m_ledgerName);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
