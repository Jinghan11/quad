// Copyright 2015 Josh Pieper, jjp@pobox.com.  All rights reserved.
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

#include <boost/program_options.hpp>

#include <dart/dart.h>

#include "simulator_window.h"

using namespace mjmech::simulator;

int main(int argc, char** argv) {
  auto world = std::make_shared<dart::simulation::World>();
  SimulatorWindow window(world);

  glutInit(&argc, argv);
  window.initWindow(640, 480, "Mech Simulator");
  glutMainLoop();
}
