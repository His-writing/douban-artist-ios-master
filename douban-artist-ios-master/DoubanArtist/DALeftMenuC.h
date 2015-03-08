//
//  DALeftMenuC.h
//  DoubanArtist
//
//  Created by liujing on 14-11-19.
//
//

#import <UIKit/UIKit.h>

@interface DALeftMenuC : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *avatar;

@property (weak, nonatomic) IBOutlet UIButton *logButton;

@property (weak, nonatomic) IBOutlet UITableView *menuTable;

- (IBAction)logButton:(id)sender;


//设置
- (IBAction)clickSettingBtn:(id)sender;
//关于
- (IBAction)clickAboutBtn:(id)sender;

@end
