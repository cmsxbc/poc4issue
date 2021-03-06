 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree23(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.0565000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.68250000000000022);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 9, (DAAL_DATA_TYPE)1.0415000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 22, (DAAL_DATA_TYPE)0.72750000000000015);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)0.0030554300502819176);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[4], 1, 21, (DAAL_DATA_TYPE)0.87650000000000017);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)-0.0072848367175938171);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[6], 1, 13, (DAAL_DATA_TYPE)1.4485000000000003);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 10, (DAAL_DATA_TYPE)0.049000000000000009);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 11, (DAAL_DATA_TYPE)0.76850000000000007);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 10, (DAAL_DATA_TYPE)-0.077499999999999986);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0010636244514366476);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.016605053097009659);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.014330595844622816);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.00057872852374767439);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.012474277147224972);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[3], 1, 5, (DAAL_DATA_TYPE)2.0505000000000004);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0021717248579203072);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)0.014916024080344609);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[2], 1, 5, (DAAL_DATA_TYPE)0.86450000000000016);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 26, (DAAL_DATA_TYPE)0.77250000000000008);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0022067534601744351);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[22], 1, 26, (DAAL_DATA_TYPE)0.7945000000000001);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.015194595936271879);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 21, (DAAL_DATA_TYPE)1.0835000000000001);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 22, (DAAL_DATA_TYPE)1.0025000000000002);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 27, (DAAL_DATA_TYPE)0.88250000000000017);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.004512529169456869);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[28], 1, 18, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 24, (DAAL_DATA_TYPE)1.0265000000000002);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.010974599462416438);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0052524451743549035);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.020727454320244171);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.0087805417197489612);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.0033544694215564409);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[21], 1, 26, (DAAL_DATA_TYPE)0.80850000000000011);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.012874706880170473);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0018896472305059435);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[20], 1, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0065875299241990679);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 4, (DAAL_DATA_TYPE)1.2535000000000001);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 26, (DAAL_DATA_TYPE)1.9255000000000002);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)0.0015251286717561576);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.015777114549508461);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.010239458549767733);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[1], 1, 22, (DAAL_DATA_TYPE)1.0355000000000001);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 27, (DAAL_DATA_TYPE)1.0475000000000001);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 5, (DAAL_DATA_TYPE)1.1885000000000001);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0051871187323569391);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 24, (DAAL_DATA_TYPE)0.94450000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 27, (DAAL_DATA_TYPE)0.84850000000000014);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.0072664621930855974);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.010092493112791669);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.0080590997124090798);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[48], 1, 24, (DAAL_DATA_TYPE)1.6165000000000003);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.011078128338641443);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.001556750161475257);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[47], 1, 25, (DAAL_DATA_TYPE)1.5325000000000002);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0023544630739423967);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0036936830929838699);

}
