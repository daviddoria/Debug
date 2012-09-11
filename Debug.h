/*=========================================================================
 *
 *  Copyright David Doria 2012 daviddoria@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef Debug_H
#define Debug_H

class Debug
{
public:

  Debug() : DebugLevel(0), DebugImages(false), DebugOutputs(false), DebugIteration(0)
  {

  }

  bool IsDebugOn()
  {
    return this->DebugLevel;
  }

  unsigned int GetDebugLevel()
  {
    return this->DebugLevel;
  }

  void SetDebugLevel(const unsigned int debugLevel)
  {
    this->DebugLevel = debugLevel;
  }

  void SetDebugImages(const bool debugImages)
  {
    this->DebugImages = debugImages;
  }

  void SetDebugOutputs(const bool debugOutputs)
  {
    this->DebugOutputs = debugOutputs;
  }

  bool GetDebugImages()
  {
    return this->DebugImages;
  }

  bool GetDebugOutputs()
  {
    return this->DebugOutputs;
  }

  void SetDebugIteration(const unsigned int debugIteration)
  {
    this->DebugIteration = debugIteration;
  }

  unsigned int GetDebugIteration()
  {
    return this->DebugIteration;
  }

protected:
  unsigned int DebugLevel;

  bool DebugImages;

  bool DebugOutputs;

  unsigned int DebugIteration;
};

#endif
