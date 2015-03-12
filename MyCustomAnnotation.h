//
//  MyCustomAnnotation.h
//  MapViewAnnotation
//
//  Created by Sakshi Jain on 12/03/15.
//
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MyCustomAnnotation : NSObject <MKAnnotation>

@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *subtitle;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
-(id) initWithTitle:(NSString *) title subtitle: (NSString *)subtitle AndCoordinate:(CLLocationCoordinate2D)coordinate;

@end
