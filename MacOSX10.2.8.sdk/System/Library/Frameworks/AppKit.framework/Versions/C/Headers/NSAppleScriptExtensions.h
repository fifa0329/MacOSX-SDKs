/*
	NSAppleScriptExtensions.h
	Application Kit
	Copyright (c) 2002, Apple Computer, Inc.
	All rights reserved.
*/

#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_2

#import <Foundation/NSAppleScript.h>

@class NSAttributedString;

@interface NSAppleScript(NSExtensions)

// Return the syntax-highlighted source code of the script if the script has been compiled and its source code is available, nil otherwise.  It is possible for an NSAppleScript that has been instantiated with -initWithContentsOfURL:error: to be a script for which the source code is not available, but is nonetheless executable.
- (NSAttributedString *)richTextSource;

@end

#endif
