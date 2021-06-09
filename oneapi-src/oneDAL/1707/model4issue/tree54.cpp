 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree54(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 0, (DAAL_DATA_TYPE)2.9305000000000008);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)1.8210000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 18, (DAAL_DATA_TYPE)-2.0784999999999996);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)1.3740000000000003);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)0.0083694449572385057);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0050559720645348234);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[3], 1, 21, (DAAL_DATA_TYPE)4.2655000000000003);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 26, (DAAL_DATA_TYPE)0.72850000000000004);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 23, (DAAL_DATA_TYPE)0.98050000000000004);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.010390307587282412);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 27, (DAAL_DATA_TYPE)0.68250000000000022);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 0, (DAAL_DATA_TYPE)0.9425);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 17, (DAAL_DATA_TYPE)1.3325000000000002);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-0.0027007419122680684);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.01034852679698698);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[12], 1, 25, (DAAL_DATA_TYPE)0.50100000000000011);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)0.01285987557084472);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[16], 1, 17, (DAAL_DATA_TYPE)0.78650000000000009);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)-0.014671551755496434);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0065803231350306801);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[11], 1, 0, (DAAL_DATA_TYPE)1.1345000000000003);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.001560141987541095);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.0089898271209532671);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[8], 1, 24, (DAAL_DATA_TYPE)0.75750000000000017);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 21, (DAAL_DATA_TYPE)2.0485000000000002);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.0026952606143348054);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.012295573914334888);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[24], 1, 24, (DAAL_DATA_TYPE)1.0265000000000002);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 27, (DAAL_DATA_TYPE)0.82450000000000012);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.00038471890357869812);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[29], 1, 23, (DAAL_DATA_TYPE)0.99150000000000016);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 18, (DAAL_DATA_TYPE)-0.71149999999999991);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.0082507765138971397);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 13, (DAAL_DATA_TYPE)0.47050000000000003);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.0087861882765655937);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0033986602211855121);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 26, (DAAL_DATA_TYPE)0.85650000000000015);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.011900965434809526);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 9, (DAAL_DATA_TYPE)0.47750000000000004);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.013205809324331906);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.000288851322971054);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[28], 1, 13, (DAAL_DATA_TYPE)1.4705000000000001);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 2, (DAAL_DATA_TYPE)1.5865000000000002);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)0.00055955998976970202);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[43], 1, 26, (DAAL_DATA_TYPE)1.0885000000000002);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)-0.00060973720625042923);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)-0.016132501846757429);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[42], 1, 2, (DAAL_DATA_TYPE)1.2080000000000004);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 21, (DAAL_DATA_TYPE)1.4810000000000001);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)0.0048215223253710469);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 10, (DAAL_DATA_TYPE)0.10300000000000001);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)0.0036159184140463676);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.014774267588342941);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.01416767581533163);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.011918181079355154);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[2], 1, 0, (DAAL_DATA_TYPE)1.8945000000000001);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 15, (DAAL_DATA_TYPE)1.2345000000000004);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.0066639990415097335);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.0052624434620762864);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.004042852120473981);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0084100540635771437);

}
