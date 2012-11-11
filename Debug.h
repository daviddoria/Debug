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

/** This class is meant to be inherited to provide an easy way to provide the ability
  * to set debug flags in other classes.
  */
class Debug
{
public:

  Debug()
  {

  }

  bool IsDebugOn() const
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

  void SetDebugOutputFiles(const bool debugOutputFiles)
  {
    this->DebugOutputFiles = debugOutputFiles;
  }

  void SetDebugScreenOutputs(const bool debugScreenOutputs)
  {
    this->DebugScreenOutputs = debugScreenOutputs;
  }

  bool GetDebugImages() const
  {
    return this->DebugImages;
  }

  bool GetDebugOutputFiles() const
  {
    return this->DebugOutputFiles;
  }

  bool GetDebugScreenOutputs() const
  {
    return this->DebugScreenOutputs;
  }

  void SetDebugIteration(const unsigned int debugIteration)
  {
    this->DebugIteration = debugIteration;
  }

  unsigned int GetDebugIteration() const
  {
    return this->DebugIteration;
  }

  void IncrementDebugIteration()
  {
    this->DebugIteration++;
  }

protected:
  /** Allow setting many levels of debug outputs. */
  unsigned int DebugLevel = 0;

  /** Output debug images to image files. */
  bool DebugImages = false;

  /** Output debug information to the screen. */
  bool DebugScreenOutputs = false;

  /** Output debug files (text files, etc). */
  bool DebugOutputFiles = false;

  /** Count iterations of something. */
  unsigned int DebugIteration = 0;
};

#endif
