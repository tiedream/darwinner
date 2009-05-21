#ifndef CHINESESTRINGS_H
#define CHINESESTRINGS_H
//#include "common.h"

//group name
#define smString "Ա������"
#define bmString "ҵ�����"
#define soString "������Ӫ"
#define logoffString "ע��"
#define exitString "�˳�"
#define zeroSelectionWarning "����û��ѡ��ѡ���κ��б��"

//common strings
#define undefineStr "δ����"
#define scoreStr "��"
#define femaleStr "Ů"
#define maleStr "��"
#define cosmeticNameStr "Cosmetic����˼������������ҵ��Ӫϵͳ"
#define emptyStr ""
#define staffEntraceStr "Ա�����"
#define passwordStr "����"
#define LoginStr "��¼"
#define idStr "���"
#define okStr "ȷ��"
#define cancleStr "ȡ��"
#define backStr "����"
#define expandSideBarStr "չ�������"
#define shrinkSideBarStr "��������"
#define sexUndefinedStr "δ�趨"
#define sexMaleStr "��"
#define sexFemaleStr "Ů"
#define modifyWaring "δ�ܳɹ��޸ģ������ԡ�"
#define abandonModifyWarning "�༭�����л��л���δ�ύ����Ϣ��\n"\
															"�����������޸�?"
#define leftMark "��"
#define rightMark "��"
#define removeError "δ�ܳɹ�ɾ��ѡ����Ŀ�������ԡ�"
#define choosePicStr "ѡ����Ƭ"
#define editStr "�༭"
#define submitStr "�ύ"
#define imageFileStr "ͼ���ļ�(*.png *.jpg *.bmp *.gif)"
#define imageSizeWarning "�ǳ���Ǹ����Ƭ�ļ���С���ܳ���%1�ף�������ѡ��"
static const char* sexStr[] = { sexUndefinedStr, sexMaleStr, sexFemaleStr };

//common mgnt strings
#define loginWindowTitle "��¼����"
#define loginErrorWarning "���Ż�����������������롣"

//staff mgnt strings
#define staffIDStr "����"
#define staffNameStr "����"
#define staffSexStr "�Ա�"
#define staffJobStr "ְ��"
#define staffLevelStr "����"
#define staffStatusStr "״̬"
#define staffRatingStr "�ͻ������"
#define staffCellStr "�ֻ�"
#define staffPhoneStr "����"
#define staffAddressStr "��ַ"
#define staffDescriptionStr "��ע"
#define staffJobSalaryStr "ְ����"
#define staffLevelSalaryStr "������"
#define staffProfitStr "���(%)"
#define staffBrowseStr "Ա�����"
#define staffJobSettingStr "ְ������"
#define staffLevelSettingStr "��������"
//***********staff management message box strings
#define smEditModeWarning "Ŀǰ�����½�Ա��״̬������ɺ����޸����ϡ�"
#define smEmptyNameWarnning "Ա�������������գ� \n�뷵�ز���дԱ��������"
#define smRemoveStaffConfirm "ȷ��ɾ��ѡ��Ա����%1����\n"\
	"���Ա����ְ�����������ĸ�Ա��״̬����������ϵͳ��ɾ����Ա����"
#define smAddStaffError "δ�ܳɹ�����Ա���������ԡ�"
#define smModifyStaffError "δ�ܳɹ��޸�Ա����Ϣ�������ԡ�"
#define smJobRemoveWarning "δ�ܳɹ�ɾ���������ǻ���Ա��������Ϊ��ְ��"
#define smLevelRemoveWarning "δ�ܳɹ�ɾ���������ǻ���Ա��������Ϊ�õȼ���"
#define smChangePwSucces "��������Ѿ��ɹ����ġ�"
#define smChangePwFailure "ԭʼ��������������δ�ܸ��ġ�"

//business management string
#define bmBrandStr "Ʒ��"
#define bmBuysStr "����"
#define bmCostStr "�ɱ�"
#define bmDescriptionStr "����"
#define bmDiscountStr "�ۿ�"
#define bmIdStr "����"
#define bmNameStr "����"
#define bmRatingStr "�ͻ������"
#define bmPriceStr "�۸�"
#define bmSalesStr "������"
#define bmSpecificationStr "���"
#define bmStocksStr "���"
#define bmTypeStr "ҵ������"
#define bmAdjustableStr "�ֶ�����"
#define bmDualDiscountStr "�ظ��ۿ�"
#define bmBusinessTypeCategoryStr "ҵ������"
#define bmBusinessTypeDescriptionStr "����"
#define bmBusinessTypeNameStr "��������"
#define bmBusinessTypeIdStr "����"
#define bmNonProfitableStr "������ҵ��"
#define bmProfitableServiceStr "Ӫ���Է���"
#define bmProfitableSaleStr "Ӫ������Ʒ"
#define bmBrowseStr "ҵ�����"
#define bmTypeEditorStr "ҵ������༭"
//***********business management message box strings
#define bmModifyBusinessErrorStr "δ�ܳɹ��޸�ҵ����ϸ�������ԡ�"
#define bmAddBusinessErrorStr "δ�ܳɹ�������ҵ�������ԡ�"
#define bmRemoveBusinessConfirm "ҵ��%1����������Ӫ����¼��������գ�\n"\
	"ȷ����˾�����ṩ��ҵ��"
#define bmBusinessEditModeWarning "�½���ҵ��δ�ύ��\n"\
													"���������ı༭?"
#define bmBusinessCannotEditWarning "�����ڱ༭�½�ҵ�񣬲��һ�δ�ύ��\n"\
																		"�޷�����ҵ���޸�ģʽ��"
#define bmEmptyNameTypeWarnning "ҵ�����ƻ����಻�����գ��뷵�ز���д��"
#define bmTypeRemoveWaring "δ�ܳɹ�ɾ���������ǻ���ҵ������Ϊ�����ࡣ"
static const char*  BusinessCategoryStr[] = {bmNonProfitableStr, bmProfitableServiceStr, bmProfitableSaleStr};

#endif