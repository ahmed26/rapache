/*
**  Copyright 2003-2005  The Apache Software Foundation
**
**  Licensed under the Apache License, Version 2.0 (the "License");
**  you may not use this file except in compliance with the License.
**  You may obtain a copy of the License at
**
**      http://www.apache.org/licenses/LICENSE-2.0
**
**  Unless required by applicable law or agreed to in writing, software
**  distributed under the License is distributed on an "AS IS" BASIS,
**  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**  See the License for the specific language governing permissions and
**  limitations under the License.
*/

#include "apreq_version.h"
#include "apr_general.h" /* for APR_STRINGIFY */

APREQ_DECLARE(void) apreq_version(apr_version_t *pvsn)
{
    pvsn->major = APREQ_MAJOR_VERSION;
    pvsn->minor = APREQ_MINOR_VERSION;
    pvsn->patch = APREQ_PATCH_VERSION;
#ifdef APREQ_IS_DEV_VERSION
    pvsn->is_dev = 1;
#else
    pvsn->is_dev = 0;
#endif
}

APREQ_DECLARE(const char *) apreq_version_string(void)
{
    return APREQ_VERSION_STRING;
}
