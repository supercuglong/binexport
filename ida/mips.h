// Copyright 2011-2016 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_ZYNAMICS_BINEXPORT_IDA_MIPS_HPP_
#define THIRD_PARTY_ZYNAMICS_BINEXPORT_IDA_MIPS_HPP_

#include "third_party/zynamics/binexport/types.h"

class Instruction;
class CallGraph;
class FlowGraph;
class TypeSystem;

Instruction ParseInstructionIdaMips(CallGraph& callGraph, FlowGraph& flowGraph,
                                    TypeSystem* type_system,
                                    const Address address);

#endif  // THIRD_PARTY_ZYNAMICS_BINEXPORT_IDA_MIPS_HPP_
