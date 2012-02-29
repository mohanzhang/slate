//
//  WindowSnapshot.h
//  Slate
//
//  Created by Jigish Patel on 2/28/12.
//  Copyright 2012 Jigish Patel. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see http://www.gnu.org/licenses

#import <Foundation/Foundation.h>

@interface WindowSnapshot : NSObject {
@private
  NSString *appName;
  NSString *title;
  NSPoint topLeft;
  NSSize size;
}

@property (retain) NSString *appName;
@property (retain) NSString *title;
@property (assign) NSPoint topLeft;
@property (assign) NSSize size;

- (id)initWithAppName:(NSString *)theAppName title:(NSString *)theTitle topLeft:(NSPoint)theTopLeft size:(NSSize)theSize;
- (NSDictionary *)toDictionary;
+ (WindowSnapshot *)windowSnapshotFromDictionary:(NSDictionary *)dict;

@end
