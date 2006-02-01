// Filename: pStatThread.cxx
// Created by:  drose (30Jan06)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) 2001 - 2004, Disney Enterprises, Inc.  All rights reserved
//
// All use of this software is subject to the terms of the Panda 3d
// Software license.  You should have received a copy of this license
// along with this source code; you will also find a current copy of
// the license at http://etc.cmu.edu/panda3d/docs/license/ .
//
// To contact the maintainers of this program write to
// panda3d-general@lists.sourceforge.net .
//
////////////////////////////////////////////////////////////////////

#include "pStatThread.h"
#include "pStatClient.h"

////////////////////////////////////////////////////////////////////
//     Function: PStatThread::get_thread
//       Access: Published
//  Description: Returns the Panda Thread object associated with this
//               particular PStatThread.
////////////////////////////////////////////////////////////////////
Thread *PStatThread::
get_thread() const {
  return _client->get_thread_object(_index);
}
