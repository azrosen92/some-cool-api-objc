#import <Foundation/Foundation.h>
#import "SWGOrder.h"
#import "SWGApi.h"

/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.6
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface SWGStoreApi: NSObject <SWGApi>

extern NSString* kSWGStoreApiErrorDomain;
extern NSInteger kSWGStoreApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Delete purchase order by ID
/// For valid response try integer IDs with positive integer value. Negative or non-integer values will generate API errors
///
/// @param orderId ID of the order that needs to be deleted
/// 
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Order not found"
///
/// @return 
-(NSNumber*) deleteOrderWithOrderId: (NSNumber*) orderId
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns pet inventories by status
/// Returns a map of status codes to quantities
///
/// 
///  code:200 message:"successful operation"
///
/// @return NSDictionary<NSString*, NSNumber*>*
-(NSNumber*) getInventoryWithCompletionHandler: 
    (void (^)(NSDictionary<NSString*, NSNumber*>* output, NSError* error)) handler;


/// Find purchase order by ID
/// For valid response try integer IDs with value >= 1 and <= 10. Other values will generated exceptions
///
/// @param orderId ID of pet that needs to be fetched
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Order not found"
///
/// @return SWGOrder*
-(NSNumber*) getOrderByIdWithOrderId: (NSNumber*) orderId
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;


/// Place an order for a pet
/// 
///
/// @param body order placed for purchasing the pet
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid Order"
///
/// @return SWGOrder*
-(NSNumber*) placeOrderWithBody: (SWGOrder*) body
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;



@end
