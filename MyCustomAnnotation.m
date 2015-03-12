//
//  MyCustomAnnotation.m
//  MapViewAnnotation
//
//  Created by Sakshi Jain on 12/03/15.
//
//

#import "MyCustomAnnotation.h"

@implementation MyCustomAnnotation

@synthesize coordinate=_coordinate;
@synthesize title=_title;
@synthesize subtitle = _subtitle;
-(id) initWithTitle:(NSString *) title subtitle: (NSString *)subtitle AndCoordinate:(CLLocationCoordinate2D)coordinate
{
    self = [super init];
    _title = title;
    _subtitle = subtitle;
    _coordinate = coordinate;
    return self;
}

@end
