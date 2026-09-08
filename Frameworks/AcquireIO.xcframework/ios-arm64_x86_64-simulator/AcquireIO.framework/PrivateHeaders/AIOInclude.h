//
//  AIOInclude.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/27/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#ifdef AcquireIO_BUILD
// AcquireIOSockets is a separate, independently-compiled pod target (the
// Swift socket/transport layer), so this is a normal cross-module import —
// not a same-target self-import of AcquireIO's own not-yet-emitted header.
#import <AcquireIOSockets/AcquireIOSockets-Swift.h>
#else
#include "AcquireIOSDK-Swift.h"
#endif

#import "AIOConstants.h"
#import "AIOUtility.h"
#import "AIOAccount.h"
#import "AIOAssets.h"
#import "AIOThread.h"
