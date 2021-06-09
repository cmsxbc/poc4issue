 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree43(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)1.0025000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 25, (DAAL_DATA_TYPE)0.98050000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 10, (DAAL_DATA_TYPE)-2.1794999999999995);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.010271682888269426);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[4], 1, 27, (DAAL_DATA_TYPE)0.97450000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 13, (DAAL_DATA_TYPE)0.32350000000000007);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.011497477586230924);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[7], 1, 1, (DAAL_DATA_TYPE)0.89550000000000007);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 21, (DAAL_DATA_TYPE)1.0675000000000001);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 7, (DAAL_DATA_TYPE)1.4795000000000003);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 7, (DAAL_DATA_TYPE)1.3475000000000004);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 17, (DAAL_DATA_TYPE)0.82050000000000012);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 9, (DAAL_DATA_TYPE)1.0475000000000001);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 13, (DAAL_DATA_TYPE)0.47050000000000003);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.0075905707428010841);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.0022871319493600007);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0072391564026474953);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.003609902969208257);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.011446484640240669);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.0040043949200348422);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[10], 1, 15, (DAAL_DATA_TYPE)1.1185000000000003);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 6, (DAAL_DATA_TYPE)0.75350000000000017);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.0033040844237626488);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.011561473220586777);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)-0.015679117051824447);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[9], 1, 15, (DAAL_DATA_TYPE)1.1905000000000003);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 2, (DAAL_DATA_TYPE)-0.44249999999999995);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)-0.0091722171935366414);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.00084762633314931595);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[27], 1, 10, (DAAL_DATA_TYPE)0.15750000000000003);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.0051622521942076482);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.011510436137517295);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0087884345104996594);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[3], 1, 9, (DAAL_DATA_TYPE)0.51850000000000007);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.013010522723197937);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 13, (DAAL_DATA_TYPE)0.74450000000000005);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 15, (DAAL_DATA_TYPE)-0.5575);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.0013268114938851327);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 4, (DAAL_DATA_TYPE)0.67450000000000021);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0053614911284636368);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.017795654561589748);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[37], 1, 23, (DAAL_DATA_TYPE)0.99750000000000016);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0020187938805381056);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0041842646584227365);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.00316293757529028);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[1], 1, 0, (DAAL_DATA_TYPE)1.5795000000000001);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 5, (DAAL_DATA_TYPE)2.3045000000000004);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 1, (DAAL_DATA_TYPE)1.8120000000000001);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 1, (DAAL_DATA_TYPE)-1.4269999999999998);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.0062878981503027113);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.00039031945510741771);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.0098995368603778926);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0081639388867188242);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[47], 1, 6, (DAAL_DATA_TYPE)1.3405000000000002);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 6, (DAAL_DATA_TYPE)-0.62449999999999994);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 14, (DAAL_DATA_TYPE)-0.83849999999999991);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.010381346469854608);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0020480975893636547);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0092755914598868037);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.008585875507058768);

}