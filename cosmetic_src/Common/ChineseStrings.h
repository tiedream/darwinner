#ifndef CHINESESTRINGS_H
#define CHINESESTRINGS_H

#define LOCAL8BITSTR(str) QString::fromLocal8Bit(str)
#define TOBE_REALIZIED MessageBox::showMessageBox(this, QMessageBox::Information, "实现中",  "该功能正在实现中……")
static const char* StaffSex[] = {"未知","男","女"};

//group name
static const char* smString = "员工管理";
static const char* bmString = "业务管理";
static const char* soString = "店面运营";
static const char* logoffString = "注销";
static const char* exitString = "退出";
static const char* zeroSelectionWarning = "您还没有选择选择任何列表项。";

//common strings
static const char* cosmeticNameStr = "Cosmetic（科思美）美容美发业运营系统";
static const char* emptyStr = "";
static const char* staffEntraceStr = "员工入口";
static const char* passwordStr = "密码";
static const char* LoginStr = "登录";
static const char* idStr = "编号";
static const char* okStr = "确定";
static const char* cancleStr = "取消";
static const char* backStr = "返回";
static const char* expandSideBarStr = "展开侧边栏";
static const char* shrinkSideBarStr = "收起侧边栏";
static const char* sexUndefinedStr = "未设定";
static const char* sexMaleStr = "男";
static const char* sexFemaleStr = "女";
static const char* modifyWaring = "未能成功修改，请重试。";
static const char* abandonModifyWarning = "还有未提交的修改信息，放弃修改?";
static const char* leftMark = "“";
static const char* rightMark = "”";
static const char* removeError = "未能成功删除选定项目，请重试。";
static const char* choosePicStr = "选择照片";
static const char* editStr = "编辑";
static const char* submitStr = "提交";
static const char* imageFileStr = "图像文件(*.png *.jpg *.bmp *.gif)";
static const char* imageSizeWarning = "非常抱歉，照片文件大小不能超过%1兆，请重新选择。";

//common mgnt strings
static const char* loginWindowTitle = "登录错误";
static const char* loginErrorWarning = "工号或密码错误，请重新输入。";

//staff mgnt strings
static const char* staffIDStr ="工号";
static const char* staffNameStr ="姓名";
static const char* staffSexStr ="性别";
static const char* staffJobStr ="职务";
static const char* staffLevelStr ="级别";
static const char* staffStatusStr ="状态";
static const char* staffRatingStr ="客户评价";
static const char* staffCellStr ="手机";
static const char* staffPhoneStr ="座机";
static const char* staffAddressStr ="地址";
static const char* staffDescriptionStr ="备注";
static const char* staffJobSalaryStr = "职务工资";
static const char* staffLevelSalaryStr = "级别工资";
static const char* staffProfitStr = "提成(%)";
static const char* staffBrowseStr = "员工浏览";
//***********staff mgnt message box strings
static const char* smEditModeWarning = "目前处于新建员工状态，请完成后再修改资料。";
static const char* smEmptyNameWarnning = "员工姓名不能留空， \n请返回并填写员工姓名。";
static const char* smRemoveStaffConfirm = "确定删除选定员工“%1”？\n如果员工离职，建议您更改该员工状态，而不是在系统中删除该员工。";
static const char* smAddStaffError = "未能成功添加员工，请重试。";
static const char* smModifyStaffError = "未能成功修改员工信息，请重试。";
static const char* smJobRemoveWarning = "未能成功删除，可能是还有员工被设置为该职务。";
static const char* smLevelRemoveWarning = "未能成功删除，可能是还有员工被设置为该等级。";
static const char* smChangePwSucces = "你的密码已经成功更改。";
static const char* smChangePwFailure = "原始密码错误，你的密码未能更改。";

#endif