/*
 Copyright 2009-2016 Urban Airship Inc. All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE URBAN AIRSHIP INC ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 EVENT SHALL URBAN AIRSHIP INC OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "UANotificationCategory.h"

NS_ASSUME_NONNULL_BEGIN

@interface UANotificationCategory ()

/**
 * Converts a UANotificationCategory into a UIUserNotificationCategory.
 *
 * @return An instance of UIUserNotificationCategory.
 */
- (UIUserNotificationCategory *)asUIUserNotificationCategory;

/**
 * Converts a UANotificationCategory into a UNNotificationCategory.
 *
 * @return An instance of UNNotificationCategory. Will be null on iOS 10 beta 2 and older.
 */
- (null_unspecified UNNotificationCategory *)asUNNotificationCategory;

/**
 * Tests for equivalence with a UIUserNotificationCategory. As UANotificationCategory is a
 * drop-in replacement for UNNotificationCategory, any features not applicable
 * in UIUserNotificationCategory will be ignored.
 *
 * @param category The UIUserNotificationCategory to compare with.
 * @return `YES` if the two categories are equivalent, `NO` otherwise.
 */
- (BOOL)isEqualToUIUserNotificationCategory:(UIUserNotificationCategory *)category;

/**
 * Tests for equivalence with a UNNotificationCategory.
 *
 * @param category The UNNotificationCategory to compare with.
 * @return `YES` if the two categories are equivalent, `NO` otherwise.
 */
- (BOOL)isEqualToUNNotificationCategory:(UNNotificationCategory *)category;

@end

NS_ASSUME_NONNULL_END
