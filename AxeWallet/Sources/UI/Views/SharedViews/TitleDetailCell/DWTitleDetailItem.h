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

/**
 Style of displaying detail info

 - DWTitleDetailItemStyle_Default: Multiline
 - DWTitleDetailItemStyle_TruncatedSingleLine: 1 line, truncated middle
 - DWTitleDetailItemStyle_User: contact view
 */
typedef NS_ENUM(NSUInteger, DWTitleDetailItemStyle) {
    DWTitleDetailItemStyle_Default,
    DWTitleDetailItemStyle_TruncatedSingleLine,
    DWTitleDetailItemStyle_User,
};

@protocol DWDPBasicUserItem;

@protocol DWTitleDetailItem <NSObject>

@property (assign, nonatomic) DWTitleDetailItemStyle style;
@property (nullable, readonly, nonatomic) NSString *title;
@property (nullable, readonly, nonatomic) NSString *plainDetail;
@property (nullable, readonly, nonatomic) NSAttributedString *attributedDetail;
@property (nullable, readonly, nonatomic) id<DWDPBasicUserItem> userItem;
@property (nullable, readonly, nonatomic) NSString *copyableData;
@property (assign, nonatomic) NSTextAlignment detailAlignment;

@end

NS_ASSUME_NONNULL_END
