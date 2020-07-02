//
//  Created by Andrew Podkovyrin
//  Copyright © 2019 Axe Core Group. All rights reserved.
//
//  Licensed under the MIT License (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  https://opensource.org/licenses/MIT
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class DWSeedWordModel;

@interface DWSeedPhraseModel : NSObject <NSCopying>

@property (readonly, nonatomic, copy) NSArray<DWSeedWordModel *> *words;

#if DEBUG
- (NSString *)debug_seedText;
#endif /* DEBUG */

- (instancetype)initWithSeed:(NSString *)seed NS_DESIGNATED_INITIALIZER;
- (instancetype)initByShufflingSeedPhrase:(DWSeedPhraseModel *)seedPhrase NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
